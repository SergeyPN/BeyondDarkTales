//Copyright (c) 2020 Nineva Studios

#include "FBFetchFriendsUtils.h"
#include "FBJavaConvertor.h"

FFBFetchedFriendsData FBFetchFriendsUtils::FetchedFriendsDataFromJavaObject(jobject javaFriendsObject)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jobject JavaFriendsObject = Env->NewGlobalRef(javaFriendsObject);

	FFBFetchedFriendsData FriendsData;

	FriendsData.Data = FBFetchFriendsUtils::FriendsDataArrayFromJavaArray(JavaFriendsObject);
	FriendsData.Paging = FBFetchFriendsUtils::PagingCursorsFromJavaObject(JavaFriendsObject);
	FriendsData.Summary = FBFetchFriendsUtils::SummaryTotalCountFromJavaObject(JavaFriendsObject);

	Env->DeleteGlobalRef(JavaFriendsObject);
	Env->DeleteLocalRef(javaFriendsObject);

	return FriendsData;
}

TArray<FFBFriendData> FBFetchFriendsUtils::FriendsDataArrayFromJavaArray(jobject JavaFriendsObject)
{
	TArray<FFBFriendData> friendsDataArray;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass FBFriendsDataClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesFriendsListData");

	jfieldID friendsArrayDataFieldID = Env->GetFieldID(FBFriendsDataClass, "data", "[Lcom/ninevastudios/fbgoodies/entities/FBGoodiesFriendData;");
	jobjectArray javaFriendsArray = reinterpret_cast<jobjectArray>(Env->GetObjectField(JavaFriendsObject, friendsArrayDataFieldID));

	int length = Env->GetArrayLength(javaFriendsArray);

	if (length > 0)
	{
		for (int i = 0; i < length; i++)
		{
			jobject friendDataObject = Env->GetObjectArrayElement(javaFriendsArray, i);

			FFBFriendData friendData = FBFetchFriendsUtils::FriendDataFromJavaObject(friendDataObject);

			friendsDataArray.Add(friendData);
		}
	}

	Env->DeleteLocalRef(FBFriendsDataClass);

	return friendsDataArray;
}

FFBFriendData FBFetchFriendsUtils::FriendDataFromJavaObject(jobject friendData)
{
	FFBFriendData FriendData;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jclass FBFriendsDataClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesFriendData");

	jfieldID nameFieldID = Env->GetFieldID(FBFriendsDataClass, "name", "Ljava/lang/String;");
	jstring friendName = static_cast<jstring>(Env->GetObjectField(friendData, nameFieldID));
	FriendData.Name = FBJavaConvertor::FromJavaString(friendName);

	jfieldID idFieldID = Env->GetFieldID(FBFriendsDataClass, "id", "Ljava/lang/String;");
	jstring friendId = static_cast<jstring>(Env->GetObjectField(friendData, idFieldID));
	FriendData.Id = FBJavaConvertor::FromJavaString(friendId);

	Env->DeleteLocalRef(friendData);
	Env->DeleteLocalRef(FBFriendsDataClass);

	return FriendData;
}

FFBFriendsPaging FBFetchFriendsUtils::PagingCursorsFromJavaObject(jobject JavaFriendsObject)
{
	FFBFriendsPaging FriendsPaging;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass FBFriendsDataClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesFriendsListData");

	jfieldID friendsArrayDataFieldID = Env->GetFieldID(FBFriendsDataClass, "data", "[Lcom/ninevastudios/fbgoodies/entities/FBGoodiesFriendData;");
	jobjectArray javaFriendsArray = reinterpret_cast<jobjectArray>(Env->GetObjectField(JavaFriendsObject, friendsArrayDataFieldID));

	int length = Env->GetArrayLength(javaFriendsArray);

	if (length > 0)
	{
		jfieldID pagingDataFieldID = Env->GetFieldID(FBFriendsDataClass, "paging", "Lcom/ninevastudios/fbgoodies/entities/FBGoodiesPaging;");
		jobject javaPaging = Env->GetObjectField(JavaFriendsObject, pagingDataFieldID);

		jclass FBPagingClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesPaging");
		jfieldID cursorsFieldID = Env->GetFieldID(FBPagingClass, "cursors", "Lcom/ninevastudios/fbgoodies/entities/FBGoodiesCursors;");
		jobject javaCursors = Env->GetObjectField(javaPaging, cursorsFieldID);

		jclass PagingCursorsClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesCursors");

		jfieldID beforeFieldID = Env->GetFieldID(PagingCursorsClass, "before", "Ljava/lang/String;");
		jstring beforeString = static_cast<jstring>(Env->GetObjectField(javaCursors, beforeFieldID));
		FriendsPaging.Cursors.Before = FBJavaConvertor::FromJavaString(beforeString);

		jfieldID afterFieldID = Env->GetFieldID(PagingCursorsClass, "after", "Ljava/lang/String;");
		jstring afterString = static_cast<jstring>(Env->GetObjectField(javaCursors, afterFieldID));
		FriendsPaging.Cursors.After = FBJavaConvertor::FromJavaString(afterString);

		jfieldID previousFieldID = Env->GetFieldID(FBPagingClass, "previous", "Ljava/lang/String;");
		jstring previousString = static_cast<jstring>(Env->GetObjectField(javaPaging, previousFieldID));
		FriendsPaging.Previous = FBJavaConvertor::FromJavaString(previousString);

		jfieldID nextFieldID = Env->GetFieldID(FBPagingClass, "next", "Ljava/lang/String;");
		jstring nextString = static_cast<jstring>(Env->GetObjectField(javaPaging, nextFieldID));
		FriendsPaging.Next = FBJavaConvertor::FromJavaString(nextString);

		Env->DeleteLocalRef(FBPagingClass);
		Env->DeleteLocalRef(PagingCursorsClass);
	}
	Env->DeleteLocalRef(FBFriendsDataClass);

	return FriendsPaging;
}

FFBFriendsSummary FBFetchFriendsUtils::SummaryTotalCountFromJavaObject(jobject JavaFriendsObject)
{
	FFBFriendsSummary FriendsSummary;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();

	jclass FBFriendsDataClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesFriendsListData");
	jfieldID summaryDataFieldID = Env->GetFieldID(FBFriendsDataClass, "summary", "Lcom/ninevastudios/fbgoodies/entities/FBGoodiesSummary;");
	jobject javaSummary = Env->GetObjectField(JavaFriendsObject, summaryDataFieldID);

	jclass FBSummaryClass = FAndroidApplication::FindJavaClass("com/ninevastudios/fbgoodies/entities/FBGoodiesSummary");
	jfieldID totalCountFieldID = Env->GetFieldID(FBSummaryClass, "total_count", "I");
	jint javaTotalCount = Env->GetIntField(javaSummary, totalCountFieldID);

	FriendsSummary.TotalCount = (int)javaTotalCount;

	Env->DeleteLocalRef(FBFriendsDataClass);
	Env->DeleteLocalRef(FBSummaryClass);

	return FriendsSummary;
}