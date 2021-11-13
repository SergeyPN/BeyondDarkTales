//Copyright (c) 2020 Nineva Studios

#include "Login/FBFriendsData.h"

#include "Android/AndroidJava.h"
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"

#pragma once

class FBFetchFriendsUtils
{
public:
	
	static FFBFetchedFriendsData FetchedFriendsDataFromJavaObject(jobject javaFriendsDataObject);

	static TArray<FFBFriendData> FriendsDataArrayFromJavaArray(jobject javaFriendsDataObject);

	static FFBFriendData FriendDataFromJavaObject(jobject javaFriendsDataObject);

	static FFBFriendsPaging PagingCursorsFromJavaObject(jobject javaFriendsDataObject);

	static FFBFriendsSummary SummaryTotalCountFromJavaObject(jobject javaFriendsDataObject);
};