// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Analytics/FBAnalyticsEventParameter.h"
#include "Analytics/FBUserData.h"

#include "FBAnalyticsLibrary.generated.h"

/**
 * Class responsible for client-side event logging for specialized application analytics available
 * through Facebook App Insights and for use with Facebook Ads conversion tracking and optimization.
 */
UCLASS()
class FACEBOOKGOODIES_API UFBAnalyticsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Log an event.
	 *
	 * @param EventName - name of the event.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void LogEvent(const FString& EventName);

	/**
	 * Log an event.
	 *
	 * @param EventName - name of the event.
	 * @param Parameters - a set of key/value pairs in the parameters dictionary.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void LogEventWithParameters(const FString& EventName,
									   const TMap<FString, UFBAnalyticsEventParameter*>& Parameters);

	/**
	 * Log an event.
	 *
	 * @param EventName - name of the event.
	 * @param Parameters - a set of key/value pairs in the parameters dictionary.
	 * @param ValueToSum - a numeric value to be aggregated with other events of this name.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void LogEventWithParametersAndSumValue(const FString& EventName,
												  const TMap<FString, UFBAnalyticsEventParameter*>& Parameters,
												  float ValueToSum);

	/**
	 * Set the data, associated with the current user.
	 *
	 * @param UserData - user data.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void SetUserData(const FFBUserData& UserData);

	/**
	 * Set the event flush behaviour.
	 *
	 * @param Auto - true for automatic, false for manual..
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void SetFlushBehaviour(bool Auto);

	/**
	 * Clear the data, associated with the current user.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void ClearUserData();

	/**
	 * Clear current user ID.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void ClearUserId();

	/**
	 * Flush all the previously logged events. Useful only if the flush behaviour is set to manual.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void Flush();

	/**
	 * Get the unique identifier for the current application on the device.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static FString GetAnonymousAppDeviceGuid();

	/**
	 * Get the Facebook App ID used by the SDK.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static FString GetApplicationId();

	/**
	 * Get whether the event flush behaviour is automatic.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static bool IsFlushAuto();

	/**
	 * Get the data, associated with the current user, in a string representation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static FString GetUserData();

	/**
	 * iOS only! Sets wether application advertiser tracking is enabled or not.
	 *
	 * @param IsTrackingEnabled - toggle tracking based upon user's consent.
	 */
	UFUNCTION(BlueprintCallable, Category = "Facebook Goodies | Analytics")
	static void SetAdvertiserTrackingEnabled(bool IsTrackingEnabled);
};
