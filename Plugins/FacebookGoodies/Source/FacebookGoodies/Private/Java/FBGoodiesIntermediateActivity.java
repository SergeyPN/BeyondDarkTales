//// Copyright (c) 2020 Nineva Studios

package com.ninevastudios.fbgoodies;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;

import com.facebook.CallbackManager;
import com.facebook.FacebookCallback;
import com.facebook.FacebookException;
import com.facebook.login.LoginManager;
import com.facebook.login.LoginResult;
import com.facebook.share.model.ShareContent;
import com.facebook.share.widget.ShareDialog;

import java.util.Arrays;

public class FBGoodiesIntermediateActivity extends Activity {

	public static native void onLoginSuccessCallback();
	public static native void onLoginCancelCallback();
	public static native void onLoginErrorCallback(String errorMessage);

	public static final String EXTRA_ACTION = "extra_action";
	public static final String EXTRA_SHARE_CONTENT = "extra_share_content";
	public static final String EXTRA_SHARE_MODE = "extra_share_mode";
	public static final int ACTION_NONE = 0;
	public static final int ACTION_SHARE = 147;
	public static final int ACTION_LOGIN_READ_PERMISSIONS = 17;
	public static final int ACTION_LOGIN_PUBLISH_PERMISSIONS = 18;

	public static final String EXTRA_PERMISSIONS = "extra_permissions";

	private CallbackManager mCallbackManager;

	@SuppressWarnings("rawtypes")
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);

		mCallbackManager = CallbackManager.Factory.create();
		Intent launchIntent = getIntent();

		int action = launchIntent.getIntExtra(EXTRA_ACTION, ACTION_NONE);
		switch (action){
			case ACTION_LOGIN_READ_PERMISSIONS:
				String[] readPermissions = launchIntent.getStringArrayExtra(EXTRA_PERMISSIONS);
				Login(readPermissions, false);
				break;
			case ACTION_LOGIN_PUBLISH_PERMISSIONS:
				String[] publishPermissions = launchIntent.getStringArrayExtra(EXTRA_PERMISSIONS);
				Login(publishPermissions, true);
				break;
			case ACTION_SHARE:
				int shareMode = launchIntent.getIntExtra(EXTRA_SHARE_MODE, 0);
				ShareContent content = launchIntent.getParcelableExtra(EXTRA_SHARE_CONTENT);
				Share(content, shareMode);
				break;
			default:
				finish();
		}
	}

	@Override
	protected void onActivityResult(int requestCode, int resultCode, Intent intent) {
		super.onActivityResult(requestCode, resultCode, intent);
		mCallbackManager.onActivityResult(requestCode, resultCode, intent);

		finish();
	}

	private void Login(String[] permissions, boolean requestPublishPermissions) {
		LoginManager.getInstance().registerCallback(mCallbackManager, new FacebookCallback<LoginResult>() {
			@Override
			public void onSuccess(LoginResult loginResult) {
				onLoginSuccessCallback();
			}

			@Override
			public void onCancel() {
				onLoginCancelCallback();
			}

			@Override
			public void onError(FacebookException error) {
				onLoginErrorCallback(error.toString());
			}
		});

		if (requestPublishPermissions) {
			LoginManager.getInstance().logInWithPublishPermissions(this, Arrays.asList(permissions));
		}
		else {
			LoginManager.getInstance().logInWithReadPermissions(this, Arrays.asList(permissions));
		}

	}

	@SuppressWarnings("rawtypes")
	private void Share(ShareContent content, int shareMode) {
		ShareDialog shareDialog = new ShareDialog(this);
		shareDialog.registerCallback(mCallbackManager, FBGoodiesShare.GetShareCallback());
		shareDialog.show(content, FBGoodiesShare.ParseMode(shareMode));
	}
}
