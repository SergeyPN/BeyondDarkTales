// Copyright (c) 2020 Nineva Studios

#include "FBMethodCallUtils.h"

namespace FBMethodCallUtils
{
FString CallStaticStringMethod(const ANSICHAR* ClassName, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = FAndroidApplication::FindJavaClass(ClassName);

	jmethodID Method = FJavaWrapper::FindStaticMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	jstring Return = static_cast<jstring>(Env->CallStaticObjectMethodV(Class, Method, Args));
	va_end(Args);

	const char* UTFString = Env->GetStringUTFChars(Return, nullptr);
	FString Result(UTF8_TO_TCHAR(UTFString));
	Env->ReleaseStringUTFChars(Return, UTFString);

	Env->DeleteLocalRef(Class);

	return Result;
}

bool CallStaticBoolMethod(const ANSICHAR* ClassName, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = FAndroidApplication::FindJavaClass(ClassName);

	jmethodID Method = FJavaWrapper::FindStaticMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	bool Result = Env->CallStaticBooleanMethodV(Class, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}

int CallStaticIntMethod(const ANSICHAR* ClassName, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = FAndroidApplication::FindJavaClass(ClassName);

	jmethodID Method = FJavaWrapper::FindStaticMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	int Result = Env->CallStaticIntMethodV(Class, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}

long CallStaticLongMethod(const ANSICHAR* ClassName, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = FAndroidApplication::FindJavaClass(ClassName);

	jmethodID Method = FJavaWrapper::FindStaticMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	long Result = Env->CallStaticLongMethodV(Class, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}

jobject CallStaticObjectMethod(const ANSICHAR* ClassName, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = FAndroidApplication::FindJavaClass(ClassName);

	jmethodID Method = FJavaWrapper::FindStaticMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	jobject Result = Env->CallStaticObjectMethodV(Class, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}

void CallStaticVoidMethod(const ANSICHAR* ClassName, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = FAndroidApplication::FindJavaClass(ClassName);

	jmethodID Method = FJavaWrapper::FindStaticMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	Env->CallStaticVoidMethodV(Class, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);
}

FString CallStringMethod(jobject object, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = Env->GetObjectClass(object);

	jmethodID Method = FJavaWrapper::FindMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	jstring Return = static_cast<jstring>(Env->CallObjectMethodV(object, Method, Args));
	va_end(Args);

	const char* UTFString = Env->GetStringUTFChars(Return, nullptr);
	FString Result(UTF8_TO_TCHAR(UTFString));
	Env->ReleaseStringUTFChars(Return, UTFString);

	Env->DeleteLocalRef(Class);

	return Result;
}

bool CallBoolMethod(jobject object, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = Env->GetObjectClass(object);

	jmethodID Method = FJavaWrapper::FindMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	bool Result = Env->CallBooleanMethodV(object, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}

int CallIntMethod(jobject object, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = Env->GetObjectClass(object);

	jmethodID Method = FJavaWrapper::FindMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	int Result = Env->CallIntMethodV(object, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}
jobject CallObjectMethod(jobject object, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = Env->GetObjectClass(object);

	jmethodID Method = FJavaWrapper::FindMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	jobject Result = Env->CallObjectMethodV(object, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);

	return Result;
}

void CallVoidMethod(jobject object, const ANSICHAR* MethodName, const ANSICHAR* MethodSignature, ...)
{
	bool bIsOptional = false;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass Class = Env->GetObjectClass(object);

	jmethodID Method = FJavaWrapper::FindMethod(Env, Class, MethodName, MethodSignature, bIsOptional);

	va_list Args;
	va_start(Args, MethodSignature);
	Env->CallVoidMethodV(object, Method, Args);
	va_end(Args);

	Env->DeleteLocalRef(Class);
}
}
