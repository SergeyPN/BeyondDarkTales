//// Copyright (c) 2020 Nineva Studios

package com.ninevastudios.fbgoodies;

import android.app.Activity;
import android.content.Intent;

import com.facebook.AccessToken;
import com.facebook.login.LoginManager;

public class FBGoodiesLogin {

	public static void LoginWithReadPermissions(Activity activity, String[] permissions) {
		Intent intent = new Intent(activity, FBGoodiesIntermediateActivity.class);
		intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_ACTION, FBGoodiesIntermediateActivity.ACTION_LOGIN_READ_PERMISSIONS);
		intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_PERMISSIONS, permissions);
		activity.startActivity(intent);
	}

	public static void LoginWithPublishPermissions(Activity activity, String[] permissions) {
		Intent intent = new Intent(activity, FBGoodiesIntermediateActivity.class);
		intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_ACTION, FBGoodiesIntermediateActivity.ACTION_LOGIN_PUBLISH_PERMISSIONS);
		intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_PERMISSIONS, permissions);
		activity.startActivity(intent);
	}

	public static void Logout() {
		LoginManager.getInstance().logOut();
	}

	public static String GetAccessToken() {
		if (IsLoggedIn()) {
			return AccessToken.getCurrentAccessToken().getToken();
		}
		return "";
	}

	public static String GetUserId() {
		if (IsLoggedIn()) {
			return AccessToken.getCurrentAccessToken().getUserId();
		}
		return "";
	}

	public static String[] GetPermissions() {
		if (IsLoggedIn()) {
			return AccessToken.getCurrentAccessToken().getPermissions().toArray(new String[0]);
		}
		return new String[0];
	}

	public static String[] GetDeclinedPermissions() {
		if (IsLoggedIn()) {
			return AccessToken.getCurrentAccessToken().getDeclinedPermissions().toArray(new String[0]);
		}
		return new String[0];
	}

	public static String[] GetExpiredPermissions() {
		if (IsLoggedIn()) {
			return AccessToken.getCurrentAccessToken().getExpiredPermissions().toArray(new String[0]);
		}
		return new String[0];
	}

	public static boolean IsLoggedIn() {
		AccessToken accessToken = AccessToken.getCurrentAccessToken();
		return accessToken != null && !accessToken.isExpired();
	}
}
