//// Copyright (c) 2020 Nineva Studios

package com.ninevastudios.fbgoodies;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;

import androidx.core.content.FileProvider;

import com.facebook.FacebookCallback;
import com.facebook.FacebookException;
import com.facebook.share.Sharer;
import com.facebook.share.model.ShareContent;
import com.facebook.share.model.ShareHashtag;
import com.facebook.share.model.ShareLinkContent;
import com.facebook.share.model.ShareMedia;
import com.facebook.share.model.ShareMediaContent;
import com.facebook.share.model.SharePhoto;
import com.facebook.share.model.SharePhotoContent;
import com.facebook.share.model.ShareStoryContent;
import com.facebook.share.model.ShareVideo;
import com.facebook.share.model.ShareVideoContent;
import com.facebook.share.widget.ShareDialog;

import java.io.File;
import java.nio.ByteBuffer;
import java.util.Arrays;

public class FBGoodiesShare {

	public static native void OnShareSuccess(String postId);

	public static native void OnShareCancel();

	public static native void OnShareError(String error);

	public static SharePhoto.Builder GetSharePhotoBuilder() {
		return new SharePhoto.Builder();
	}

	public static SharePhoto.Builder AddBitmapToPhotoBuilder(SharePhoto.Builder builder, byte[] imageBytes, int width, int height) {
		Bitmap bitmap = Bitmap.createBitmap(width, height, Bitmap.Config.ARGB_8888);
		ByteBuffer byteBuffer = ByteBuffer.wrap(imageBytes);
		bitmap.copyPixelsFromBuffer(byteBuffer);

		return builder.setBitmap(bitmap);
	}

	public static SharePhoto.Builder AddImageToPhotoBuilder(SharePhoto.Builder builder, Activity context, String path) {
		return builder.setImageUrl(getUriForFile(context, path));
	}

	public static ShareVideo.Builder GetShareVideoBuilder(Activity context, String path) {
		return new ShareVideo.Builder()
				.setLocalUrl(getUriForFile(context, path));
	}

	public static ShareLinkContent.Builder GetShareLinkContentBuilder() {
		return new ShareLinkContent.Builder();
	}

	public static SharePhotoContent.Builder GetSharePhotoContentBuilder() {
		return new SharePhotoContent.Builder();
	}

	public static ShareVideoContent.Builder GetShareVideoContentBuilder() {
		return new ShareVideoContent.Builder();
	}

	public static ShareStoryContent.Builder GetShareStoryContentBuilder() {
		return new ShareStoryContent.Builder();
	}

	public static ShareMediaContent.Builder GetShareMediaContentBuilder(ShareMedia[] media) {
		return new ShareMediaContent.Builder()
				.addMedia(Arrays.asList(media));
	}

	public static <T extends ShareContent.Builder> T SetHashTag(T builder, String hashTag) {
		return (T) builder.setShareHashtag(new ShareHashtag.Builder().setHashtag(hashTag).build());
	}


	@SuppressWarnings("rawtypes")
	public static void ShareContent(Activity context, ShareContent content, int mode) {
		if (ShareDialog.canShow(content.getClass())) {
			Intent intent = new Intent(context, FBGoodiesIntermediateActivity.class);
			intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_ACTION, FBGoodiesIntermediateActivity.ACTION_SHARE);
			intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_SHARE_CONTENT, content);
			intent.putExtra(FBGoodiesIntermediateActivity.EXTRA_SHARE_MODE, mode);
			context.startActivity(intent);
		} else {
			OnShareError(content.getClass().getName() + " content can not be handled by the share dialog.");
		}
	}

	static ShareDialog.Mode ParseMode(int mode) {
		switch (mode) {
			case 1:
				return ShareDialog.Mode.NATIVE;
			case 2:
				return ShareDialog.Mode.WEB;
			case 3:
				return ShareDialog.Mode.FEED;
			default:
				return ShareDialog.Mode.AUTOMATIC;
		}
	}

	static FacebookCallback<Sharer.Result> GetShareCallback() {
		return new FacebookCallback<Sharer.Result>() {

			@Override
			public void onSuccess(Sharer.Result result) {
				String postId = result.getPostId();
				OnShareSuccess(postId == null ? "" : postId);
			}

			@Override
			public void onCancel() {
				OnShareCancel();
			}

			@Override
			public void onError(FacebookException error) {
				OnShareError(error.getMessage());
			}
		};
	}

	static String getAuthority(Activity activity) {
		return activity.getPackageName() + "." + FBFileProvider.class.getSimpleName();
	}

	static Uri getUriForFile(Activity context, String path) {
		return FileProvider.getUriForFile(context, getAuthority(context), new File(path));
	}
}
