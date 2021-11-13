// Copyright (c) 2018 Nineva Studios

#include "FBJavaConvertor.h"

#include "Analytics/FBAnalyticsEventParameter.h"
#include "Engine/Texture2D.h"
#include "Sharing/Media/FBShareMedia.h"

namespace FBJavaConvertor
{
jobjectArray ConvertToJStringArray(const TArray<FString>& stringArray)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jobjectArray javaStringArray = (jobjectArray)Env->NewObjectArray(stringArray.Num(), FJavaWrapper::JavaStringClass, nullptr);

	for (int i = 0; i < stringArray.Num(); i++)
	{
		Env->SetObjectArrayElement(javaStringArray, i, GetJavaString(stringArray[i]));
	}

	return javaStringArray;
}

jbooleanArray ConvertToJBooleanArray(const TArray<bool>& boolArray)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jbooleanArray javaBooleanArray = (jbooleanArray)Env->NewBooleanArray(boolArray.Num());

	jboolean* javaBooleanArrayPtr = Env->GetBooleanArrayElements(javaBooleanArray, 0);

	for (int i = 0; i < boolArray.Num(); i++)
	{
		javaBooleanArrayPtr[i] = boolArray[i];
	}

	return javaBooleanArray;
}

jintArray ConvertToJIntArray(const TArray<int>& intArray)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jintArray javaIntArray = (jintArray)Env->NewIntArray(intArray.Num());

	jint* javaIntArrayPtr = (jint*)malloc(intArray.Num() * sizeof(jint));

	for (int i = 0; i < intArray.Num(); i++)
	{
		javaIntArrayPtr[i] = (jint)intArray[i];
	}

	Env->SetIntArrayRegion(javaIntArray, 0, intArray.Num(), javaIntArrayPtr);

	free(javaIntArrayPtr);

	return javaIntArray;
}

jbyteArray ConvertToJByteArray(const TArray<uint8>& byteArray)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jbyteArray javaByteArray = (jbyteArray)Env->NewByteArray(byteArray.Num());

	jbyte* javaByteArrayPtr = (jbyte*)malloc(byteArray.Num() * sizeof(jbyte));

	for (int i = 0; i < byteArray.Num(); i++)
	{
		javaByteArrayPtr[i] = byteArray[i];
	}

	Env->SetByteArrayRegion(javaByteArray, 0, byteArray.Num(), javaByteArrayPtr);

	free(javaByteArrayPtr);

	return javaByteArray;
}

jlongArray ConvertToJLongArray(const TArray<long>& longArray)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jlongArray javaLongArray = (jlongArray)Env->NewLongArray(longArray.Num());

	jlong* javaLongArrayPtr = (jlong*)malloc(longArray.Num() * sizeof(jlong));

	for (int i = 0; i < longArray.Num(); i++)
	{
		javaLongArrayPtr[i] = longArray[i];
	}

	Env->SetLongArrayRegion(javaLongArray, 0, longArray.Num(), javaLongArrayPtr);

	free(javaLongArrayPtr);

	return javaLongArray;
}

TArray<uint8> ConvertToByteArray(jbyteArray javaArray)
{
	TArray<uint8> byteArray;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jbyte* javaByte = Env->GetByteArrayElements(javaArray, 0);

	int length = Env->GetArrayLength(javaArray);

	for (int i = 0; i < length; i++)
	{
		byteArray.Add(javaByte[i]);
	}

	return byteArray;
}

TArray<long> ConvertToLongArray(jlongArray javaArray)
{
	TArray<long> longArray;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jlong* javaLong = Env->GetLongArrayElements(javaArray, 0);

	int length = Env->GetArrayLength(javaArray);

	for (int i = 0; i < length; i++)
	{
		longArray.Add((long)javaLong[i]);
	}

	return longArray;
}

TArray<FString> ConvertToStringArray(jobjectArray javaStringArray)
{
	TArray<FString> stringArray;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	int length = Env->GetArrayLength(javaStringArray);

	for (int i = 0; i < length; i++)
	{
		jstring javaString = static_cast<jstring>(Env->GetObjectArrayElement(javaStringArray, i));

		stringArray.Add(FromJavaString(javaString));
	}

	return stringArray;
}

jstring GetJavaString(FString string)
{
	JNIEnv* JEnv = AndroidJavaEnv::GetJavaEnv();
	jstring local = JEnv->NewStringUTF(TCHAR_TO_UTF8(*string));
	jstring result = (jstring)JEnv->NewGlobalRef(local);
	JEnv->DeleteLocalRef(local);
	return result;
}

FString FromJavaString(jstring javaString)
{
	JNIEnv* Env = AndroidJavaEnv::GetJavaEnv();
	const char* UTFString = Env->GetStringUTFChars(javaString, nullptr);
	FString Result(UTF8_TO_TCHAR(UTFString));
	Env->ReleaseStringUTFChars(javaString, UTFString);
	Env->DeleteLocalRef(javaString);

	return Result;
}

float FromJavaInt(jint javaInt)
{
	JNIEnv* JEnv = AndroidJavaEnv::GetJavaEnv();
	int Result = static_cast<int>(javaInt);

	return Result;
}

TMap<FString, FString> FromJavaMap(jobject javaMap)
{
	TMap<FString, FString> result;

	JNIEnv* env = FAndroidApplication::GetJavaEnv();
	jclass mapClass = env->FindClass("java/util/HashMap");
	jmethodID entrySet = env->GetMethodID(mapClass, "entrySet", "()Ljava/util/Set;");
	jobject set = env->CallObjectMethod(javaMap, entrySet);

	jclass setClass = env->FindClass("java/util/Set");
	jmethodID iterator = env->GetMethodID(setClass, "iterator", "()Ljava/util/Iterator;");
	jobject iter = env->CallObjectMethod(set, iterator);
	// Get the Iterator method IDs
	jclass iteratorClass = env->FindClass("java/util/Iterator");
	jmethodID hasNext = env->GetMethodID(iteratorClass, "hasNext", "()Z");
	jmethodID next = env->GetMethodID(iteratorClass, "next", "()Ljava/lang/Object;");
	// Get the Entry class method IDs
	jclass entryClass = env->FindClass("java/util/Map$Entry");
	jmethodID getKey = env->GetMethodID(entryClass, "getKey", "()Ljava/lang/Object;");
	jmethodID getValue = env->GetMethodID(entryClass, "getValue", "()Ljava/lang/Object;");
	// Iterate over the entry Set
	while (env->CallBooleanMethod(iter, hasNext))
	{
		jobject entry = env->CallObjectMethod(iter, next);
		jstring javaKey = (jstring)env->CallObjectMethod(entry, getKey);
		jstring javaValue = (jstring)env->CallObjectMethod(entry, getValue);

		FString Key = FromJavaString(javaKey);
		FString Value = FromJavaString(javaValue);
		result.Add(Key, Value);

		env->DeleteLocalRef(entry);
	}

	return result;
}

jobject MapToJavaBundle(const TMap<FString, FString>& Map)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass BundleClass = FJavaWrapper::FindClass(Env, "android/os/Bundle", false);
	jmethodID BundleCtor = FJavaWrapper::FindMethod(Env, BundleClass, "<init>", "()V", false);
	jmethodID PutMethod = FJavaWrapper::FindMethod(Env, BundleClass, "putString", "(Ljava/lang/String;Ljava/lang/String;)V", false);
	jobject Bundle = Env->NewObject(BundleClass, BundleCtor);

	for (const auto& DataPair : Map)
	{
		jstring Key = Env->NewStringUTF(TCHAR_TO_UTF8(*DataPair.Key));
		jstring Value = Env->NewStringUTF(TCHAR_TO_UTF8(*DataPair.Value));

		Env->CallVoidMethod(Bundle, PutMethod, Key, Value);
	}

	return Bundle;
}

jobject AnalyticsParameterMapToJavaBundle(const TMap<FString, UFBAnalyticsEventParameter*>& Values)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass BundleClass = FJavaWrapper::FindClass(Env, "android/os/Bundle", false);
	jmethodID BundleCtor = FJavaWrapper::FindMethod(Env, BundleClass, "<init>", "()V", false);
	jobject Bundle = Env->NewObject(BundleClass, BundleCtor);

	for (const auto& DataPair : Values)
	{
		jobject Key = Env->NewStringUTF(TCHAR_TO_UTF8(*DataPair.Key));
		switch (DataPair.Value->Type)
		{
			case EAnalyticsEventParameterType::Float:
			{
				jmethodID PutMethod = FJavaWrapper::FindMethod(Env, BundleClass, "putDouble", "(Ljava/lang/String;D)V", false);
				float Value = DataPair.Value->GetValue<float>();
				Env->CallVoidMethod(Bundle, PutMethod, Key, (jdouble)Value);

				break;
			}
			case EAnalyticsEventParameterType::Bool:
			{
				jmethodID PutMethod = FJavaWrapper::FindMethod(Env, BundleClass, "putBoolean", "(Ljava/lang/String;Z)V", false);
				bool Value = DataPair.Value->GetValue<bool>();
				Env->CallVoidMethod(Bundle, PutMethod, Key, Value);

				break;
			}
			case EAnalyticsEventParameterType::Int:
			{
				jmethodID PutMethod = FJavaWrapper::FindMethod(Env, BundleClass, "putInt", "(Ljava/lang/String;I)V", false);
				int Value = DataPair.Value->GetValue<int>();
				Env->CallVoidMethod(Bundle, PutMethod, Key, Value);

				break;
			}
			case EAnalyticsEventParameterType::String:
			{
				jmethodID PutMethod = FJavaWrapper::FindMethod(Env, BundleClass, "putString", "(Ljava/lang/String;Ljava/lang/String;)V", false);
				jstring Value = GetJavaString(DataPair.Value->GetValue<FString>());
				Env->CallVoidMethod(Bundle, PutMethod, Key, Value);

				break;
			}
		}
	}

	return Bundle;
}

TArray<uint8> ByteArrayFromTexture(UTexture2D* image)
{
	bool isBGRA = image->PlatformData->PixelFormat == PF_B8G8R8A8;

	FColor* MipData = (FColor*)image->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
	TArray<uint8> bytes;
	int w = image->GetSizeX();
	int h = image->GetSizeY();
	for (int i = 0; i < w * h; i++)
	{
		bytes.Add(isBGRA ? MipData[i].R : MipData[i].B);
		bytes.Add(MipData[i].G);
		bytes.Add(isBGRA ? MipData[i].B : MipData[i].R);
		bytes.Add(MipData[i].A);
	}
	image->PlatformData->Mips[0].BulkData.Unlock();
	image->UpdateResource();

	return bytes;
}
jobject ToJavaMediaList(const TArray<UFBShareMedia*>& Media)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass arrayListClass = Env->FindClass("java/util/ArrayList");
	jmethodID arrayClassConstructor = Env->GetMethodID(arrayListClass, "<init>", "()V");
	jobject arrayList = Env->NewObject(arrayListClass, arrayClassConstructor);
	jmethodID arrayClassAdd = Env->GetMethodID(arrayListClass, "add", "(Ljava/lang/Object;)Z");

	for (const auto& Medium : Media)
	{
		Env->CallBooleanMethod(arrayList, arrayClassAdd, Medium->BuildMedia());
	}
	
	Env->DeleteLocalRef(arrayListClass);

	return arrayList;
}
jobjectArray ToJavaMediaArray(const TArray<UFBShareMedia*>& Media)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jclass mediaClass = FAndroidApplication::FindJavaClass("com/facebook/share/model/ShareMedia");
	jobjectArray javaMediaArray = (jobjectArray)Env->NewObjectArray(Media.Num(), mediaClass, nullptr);
	
	for (int i = 0; i < Media.Num(); i++)
	{
		Env->SetObjectArrayElement(javaMediaArray, i, Media[i]->BuildMedia());
	}
	
	Env->DeleteLocalRef(mediaClass);
	
	return javaMediaArray;
}
jobject ToJavaList(const TArray<FString>& Array)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass arrayListClass = Env->FindClass("java/util/ArrayList");
	jmethodID arrayClassConstructor = Env->GetMethodID(arrayListClass, "<init>", "()V");
	jobject arrayList = Env->NewObject(arrayListClass, arrayClassConstructor);
	jmethodID arrayClassAdd = Env->GetMethodID(arrayListClass, "add", "(Ljava/lang/Object;)Z");

	for (const auto& Str : Array)
	{
		Env->CallBooleanMethod(arrayList, arrayClassAdd, GetJavaString(Str));
	}
	
	Env->DeleteLocalRef(arrayListClass);

	return arrayList;
}
}
