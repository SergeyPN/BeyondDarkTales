//// Copyright (c) 2020 Nineva Studios

package com.ninevastudios.fbgoodies;

import android.os.Bundle;
import android.util.Log;

import com.facebook.AccessToken;
import com.facebook.GraphRequest;
import com.facebook.GraphResponse;
import com.facebook.HttpMethod;

import org.json.JSONException;
import org.json.JSONObject;

public class FBGoodiesGraph {

	public static final int HTTP_GET = 0;
	public static final int HTTP_POST = 1;
	public static final int HTTP_DELETE = 2;

	public static native void onGetProfileCompleteCallback(String name, String email, String imageURL);
	public static native void onQueryCompleteCallback(String jsonResult);
	public static native void onGetProfilePictureUrlCompleteCallback(String userPictureUrl, long callback);

	public static void RunGraphQuery(String queryPath, Bundle params, int httpMethod) {
		if (!FBGoodiesLogin.IsLoggedIn()) return;

		HttpMethod method = HttpMethod.GET;
		switch (httpMethod) {
			case  HTTP_GET: method = HttpMethod.GET; break;
			case  HTTP_POST: method = HttpMethod.POST; break;
			case  HTTP_DELETE: method = HttpMethod.DELETE; break;
		}

		GraphRequest request = new GraphRequest(AccessToken.getCurrentAccessToken(), queryPath, params, method, new GraphRequest.Callback() {
			@Override
			public void onCompleted(GraphResponse response) {
				onQueryCompleteCallback(response.getRawResponse());
			}
		});

		request.executeAsync();
	}

	public static void GetProfileData() {
		if (!FBGoodiesLogin.IsLoggedIn()) return;

		GraphRequest request = GraphRequest.newMeRequest(
				AccessToken.getCurrentAccessToken(),
				new GraphRequest.GraphJSONObjectCallback() {
					@Override
					public void onCompleted(JSONObject object, GraphResponse response) {
						try {
							String name = object.getString("name");
							String email = object.has("email") ? object.getString("email") : "";
							String imageURL = object.getJSONObject("picture").getJSONObject("data").getString("url");
							onGetProfileCompleteCallback(name, email, imageURL);
						} catch (JSONException e) {
							Log.d("FacebookGoodies", "JSON Response parse error");
						}
					}
				});

		Bundle parameters = new Bundle();
		parameters.putString("fields", "picture.type(large),name,email");
		request.setParameters(parameters);
		request.executeAsync();
	}

	public static void GetProfilePictureUrl(String userId, final long callback) {
		if(!FBGoodiesLogin.IsLoggedIn()) return;

		GraphRequest request = GraphRequest.newGraphPathRequest(
				AccessToken.getCurrentAccessToken(), String.format("/%s/picture", userId),
				new GraphRequest.Callback() {
					@Override
					public void onCompleted(GraphResponse response) {
						try {
							String pictureUrl = response.getJSONObject().getJSONObject("data").getString("url");
							onGetProfilePictureUrlCompleteCallback(pictureUrl, callback);
						} catch (JSONException e) {
							e.printStackTrace();
						}
					}
				});
		Bundle parameters = new Bundle();
		parameters.putString("type", "large");
		parameters.putBoolean("redirect", false);
		request.setParameters(parameters);
		request.executeAsync();
	}
}