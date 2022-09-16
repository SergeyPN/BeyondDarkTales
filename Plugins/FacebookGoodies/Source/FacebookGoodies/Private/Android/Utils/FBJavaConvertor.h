// Copyright (c) 2018 Nineva Studios

#pragma once

#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include "Android/AndroidJava.h"

class UTexture2D;
class UFBShareMedia;
class UFBAnalyticsEventParameter;

namespace FBJavaConvertor
{
jobjectArray ConvertToJStringArray(const TArray<FString>& stringArray);

jbooleanArray ConvertToJBooleanArray(const TArray<bool>& boolArray);

jintArray ConvertToJIntArray(const TArray<int>& intArray);

jbyteArray ConvertToJByteArray(const TArray<uint8>& byteArray);

jlongArray ConvertToJLongArray(const TArray<long>& longArray);

TArray<uint8> ConvertToByteArray(jbyteArray javaArray);

TArray<long> ConvertToLongArray(jlongArray javaArray);

TArray<FString> ConvertToStringArray(jobjectArray javaStringArray);

jstring GetJavaString(FString string);

FString FromJavaString(jstring javaString);

float FromJavaInt(jint javaInt);

TMap<FString, FString> FromJavaMap(jobject javaMap);

jobject MapToJavaBundle(const TMap<FString, FString>& Map);

jobject AnalyticsParameterMapToJavaBundle(const TMap<FString, UFBAnalyticsEventParameter*>& Values);

TArray<uint8> ByteArrayFromTexture(UTexture2D* image);

jobject ToJavaMediaList(const TArray<UFBShareMedia*>& Media);

jobjectArray ToJavaMediaArray(const TArray<UFBShareMedia*>& Media);

jobject ToJavaList(const TArray<FString>& Array);
};
