/* Generated by RuntimeBrowser.
 */

@protocol BWFigVideoDeviceStillImageCaptureDelegate <NSObject>

@required

- (void)captureDevice:(BWFigVideoCaptureDevice *)arg1 didCapturePreBracketedEV0ImageWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)captureDevice:(BWFigVideoCaptureDevice *)arg1 didCompleteStillImageCaptureWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)captureDevice:(BWFigVideoCaptureDevice *)arg1 stillImageCaptureError:(long)arg2;
- (void)captureDeviceWillBeginStillImageCapture:(BWFigVideoCaptureDevice *)arg1;

@end