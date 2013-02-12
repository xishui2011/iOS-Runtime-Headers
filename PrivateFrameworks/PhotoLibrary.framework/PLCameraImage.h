/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImage;

@interface PLCameraImage : PLPhoto {
    unsigned int _didSetPhotoData : 1;
    UIImage *_indexSheetImage;
    UIImage *_previewThumbnailImage;
}

@property(retain) UIImage *previewThumbnailImage;

- (void)dealloc;
- (BOOL)didSetPhotoData;
- (BOOL)hasFullSizeImageData;
- (id)imageWithFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)indexSheetImage;
- (id)initWithPath:(id)arg1 thumbnailImage:(id)arg2;
- (id)previewThumbnailImage;
- (void)setPhotoData;
- (void)setPreviewThumbnailImage:(id)arg1;

@end