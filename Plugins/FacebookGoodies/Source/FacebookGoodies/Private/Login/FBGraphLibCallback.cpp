//Copyright (c) 2020 Nineva Studios

#include "FBGraphLibCallback.h"

#include "Async/Async.h"

void UFBGraphLibCallback::BindGetUserPictureURLSuccessDelegate(const FOnGetUserPictureURLSuccess& OnSuccess)
{
	OnGetUserPictureURLSuccessDelegate = OnSuccess;
}

void UFBGraphLibCallback::ExecuteGetUserPictureURLSuccess(FString UserPictureURL)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		OnGetUserPictureURLSuccessDelegate.ExecuteIfBound(UserPictureURL);
	});
}