//// Copyright (c) 2020 Nineva Studios

package com.ninevastudios.fbgoodies;

import android.app.Activity;
import android.os.Bundle;

import com.facebook.appevents.AppEventsLogger;

public class FBGoodiesAnalytics {

	private static AppEventsLogger mLogger;

	public static void LogEvent(Activity context, String eventName) {
		CreateLogger(context);

		mLogger.logEvent(eventName);
	}

	public static void LogEvent(Activity context, String eventName, Bundle parameters) {
		CreateLogger(context);

		mLogger.logEvent(eventName, parameters);
	}

	public static void LogEvent(Activity context, String eventName, Bundle parameters, double valueToSum) {
		CreateLogger(context);

		mLogger.logEvent(eventName, valueToSum, parameters);
	}

	public static void SetUserData(String email, String firstName, String lastName, String phone,
	                               String dateOfBirth, String gender, String city, String state,
	                               String zip, String country) {
		AppEventsLogger.setUserData(email, firstName, lastName, phone, dateOfBirth,
				gender, city, state, zip, country);
	}

	public static void SetFlushBehaviour(boolean auto) {
		AppEventsLogger.setFlushBehavior(auto ?
				AppEventsLogger.FlushBehavior.AUTO :
				AppEventsLogger.FlushBehavior.EXPLICIT_ONLY);
	}

	public static void ClearUserData() {
		AppEventsLogger.clearUserData();
	}

	public static void ClearUserId() {
		AppEventsLogger.clearUserID();
	}

	public static void Flush(Activity context) {
		CreateLogger(context);

		mLogger.flush();
	}

	public static String GetAnonymousAppDeviceGuid(Activity context) {
		String result = AppEventsLogger.getAnonymousAppDeviceGUID(context);
		return result == null ? "" : result;
	}

	public static String GetApplicationId(Activity context) {
		CreateLogger(context);

		return mLogger.getApplicationId();
	}

	public static boolean IsFlushAuto() {
		return AppEventsLogger.getFlushBehavior() == AppEventsLogger.FlushBehavior.AUTO;
	}

	public static String GetUserData() {
		String result = AppEventsLogger.getUserData();
		return result == null ? "" : result;
	}

	private static void CreateLogger(Activity context) {
		if (mLogger != null) {
			return;
		}
		mLogger = AppEventsLogger.newLogger(context);
	}
}
