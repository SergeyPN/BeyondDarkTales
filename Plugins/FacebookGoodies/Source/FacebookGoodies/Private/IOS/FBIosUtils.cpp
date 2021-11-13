// Copyright (c) 2020 Nineva Studios

#include "FBIosUtils.h"
#include "Engine/Texture2D.h"

UIImage* FBIosUtils::ConvertTextureToImage(UTexture2D *texture)
{
	int width = texture->GetSizeX();
	int height = texture->GetSizeY();
	
	const FColor* FormatedImageData = reinterpret_cast<const FColor*>(texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_ONLY));
	
	TArray<FColor> colorArray;
	colorArray.SetNumZeroed(width*height);
	
	int byteArrayLength = width*height*4;
	
	uint8* byteArray = (uint8*)malloc(byteArrayLength);
	
	for (int32 X = 0; X < width; X++)
	{
		for (int32 Y = 0; Y < height; Y++)
		{
			int index = Y * width + X;
			colorArray[index] = FormatedImageData[index];
			
			byteArray[4 * index + 0] = colorArray[index].R;
			byteArray[4 * index + 1] = colorArray[index].G;
			byteArray[4 * index + 2] = colorArray[index].B;
			byteArray[4 * index + 3] = colorArray[index].A;
		}
	}
	
	texture->PlatformData->Mips[0].BulkData.Unlock();
	
	const int numOfComponents = 4;
	const int bitsPerComponent = 8;
	const int bitsPerPixel = numOfComponents * bitsPerComponent;
	const int bytesPerRow = numOfComponents * width;
	
	CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
	
	CFDataRef dataRef = CFDataCreate(kCFAllocatorDefault, byteArray, byteArrayLength);
	CGDataProviderRef dataProviderRef = CGDataProviderCreateWithCFData(dataRef);
	
	CGImageRef imageRef = CGImageCreate(width, height, bitsPerComponent, bitsPerPixel, bytesPerRow, colorSpace,
										kCGBitmapByteOrderDefault | kCGImageAlphaLast,
										dataProviderRef, NULL, true, kCGRenderingIntentDefault);
	
	UIImage *image = [UIImage imageWithCGImage: imageRef];
	
	free(byteArray);
	
	return image;
}
