/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperMemoryDataStore : NSObject <BSDescriptionProviding, SBFWallpaperDataStore> {
    NSMutableDictionary *_images;
    NSMutableDictionary *_originalImages;
    NSMutableDictionary *_proceduralInfo;
    NSMutableDictionary *_thumbnails;
    NSMutableDictionary *_videoURLs;
    NSMutableDictionary *_wallpaperOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int numberOfStoredImages;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasWallpaperImageForVariant:(int)arg1;
- (id)init;
- (void)moveWallpaperImageDataTypes:(unsigned int)arg1 fromVariant:(int)arg2 toVariant:(int)arg3;
- (unsigned int)numberOfStoredImages;
- (id)proceduralWallpaperInfoForVariant:(int)arg1;
- (void)removeProceduralWallpaperForVariants:(int)arg1;
- (void)removeVideoForVariant:(int)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned int)arg1 forVariants:(int)arg2;
- (void)removeWallpaperOptionsForVariants:(int)arg1;
- (BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(int)arg2;
- (BOOL)setVideoURL:(id)arg1 forVariant:(int)arg2;
- (BOOL)setWallpaperImage:(id)arg1 forVariant:(int)arg2;
- (BOOL)setWallpaperOptions:(id)arg1 forVariants:(int)arg2;
- (BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(int)arg2;
- (BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(int)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)verifiedVideoURLForVariant:(int)arg1;
- (id)wallpaperImageForVariant:(int)arg1;
- (id)wallpaperOptionsForVariant:(int)arg1;
- (id)wallpaperOriginalImageForVariant:(int)arg1;
- (id)wallpaperThumbnailDataForVariant:(int)arg1;

@end
