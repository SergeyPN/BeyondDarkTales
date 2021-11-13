//// Copyright (c) 2020 Nineva Studios

package com.ninevastudios.fbgoodies;

import android.util.Log;

import com.facebook.AccessToken;
import com.facebook.GraphRequest;
import com.facebook.GraphResponse;
import com.google.gson.Gson;
import com.ninevastudios.fbgoodies.entities.FBGoodiesFriendsListData;

import org.json.JSONArray;

public class FBGoodiesFetchFriends {

    public static native void onGetFriendsListCompleteCallback(FBGoodiesFriendsListData fetchedFriendsData);

    public static GraphResponse fetchedFriendsResponse;

    public static void GetFriendsList(String userId) {
        if (!FBGoodiesLogin.IsLoggedIn()) return;
        fetchedFriendsResponse = null;

        final GraphRequest request = GraphRequest.newGraphPathRequest(
                AccessToken.getCurrentAccessToken(), String.format("/%s/friends", userId), new GraphRequest.Callback() {
                    @Override
                    public void onCompleted(GraphResponse response) {

                        fetchedFriendsResponse = response;

                        Gson gson = new Gson();
                        FBGoodiesFriendsListData fetchedFriends = gson.fromJson(response.getJSONObject().toString(), FBGoodiesFriendsListData.class);

                        onGetFriendsListCompleteCallback(fetchedFriends);
                    }
                });
        request.executeAsync();
    }

    private static void GetPaginatedData(int cursorDirection) {

        GraphRequest pagingRequest = new GraphRequest();

        switch (cursorDirection) {
            case 0 :
                pagingRequest = fetchedFriendsResponse.getRequestForPagedResults(GraphResponse.PagingDirection.PREVIOUS);
                break;
            case 1 :
                pagingRequest = fetchedFriendsResponse.getRequestForPagedResults(GraphResponse.PagingDirection.NEXT);
                break;
        }

        if (pagingRequest != null) {
            pagingRequest.setCallback(new GraphRequest.Callback() {
                @Override
                public void onCompleted(GraphResponse response) {
                    fetchedFriendsResponse = response;

                    Gson gson = new Gson();
                    FBGoodiesFriendsListData paginatedFriendsData = gson.fromJson(response.getJSONObject().toString(), FBGoodiesFriendsListData.class);

                    onGetFriendsListCompleteCallback(paginatedFriendsData);
                }
            });
            pagingRequest.executeAsync();
        }
        else {
            String direction = (cursorDirection == 0) ? "Previous" : "Next";
            Log.d("FacebookGoodies", String.format("Error: %s paging field is empty, there's nothing to load.", direction));
        }
    }
}
