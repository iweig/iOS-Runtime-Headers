/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceExternalObserver : NSObject {
    id _eaAccessory;
    id _eaAccessoryManager;
    NSString *_eaCameraFormatBitDepth;
    NSString *_eaCameraFormatCodec;
    NSString *_eaCameraFormatHorizontalResolution;
    NSString *_eaCameraFormatMaxISO;
    NSString *_eaCameraFormatMinISO;
    NSString *_eaCameraFormatVerticalResolution;
    NSString *_eaCameraIdentifier;
    NSString *_eaCameraInfoNotification;
    NSString *_eaCameraName;
    NSString *_eaCameraSupportedImageCaptureFormat;
    NSString *_eaCameraSupportedLivePreviewFormat;
    NSString *_eaConnectNotification;
    NSString *_eaDictKey;
    NSString *_eaDisconnectNotification;
    NSMutableArray *_sourcesInfoArray;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
    void *eaLibHandle;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void)_addDevicesForAccessory:(id)arg1;
- (id)_createFigCaptureSourceInfoForAccessory:(id)arg1;
- (void)_deleteDevicesForAccessory:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (id)copySourcesInfo;
- (id)init;
- (void)listenForAccessoryConnections;

@end
