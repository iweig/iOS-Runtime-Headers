/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileCopier : NSObject {
    void *_BOMCopier;
    id /* block */ _callback;
    <IMFileCopierDelegate> *_delegate;
    BOOL _didErrorOccur;
    id _identifier;
    BOOL _inProgress;
    NSURL *_inputURL;
    unsigned int _operation;
    NSURL *_outputURL;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldCancel;
}

@property void*_BOMCopier;
@property (copy) id /* block */ _callback;
@property NSObject<OS_dispatch_queue> *_queue;
@property <IMFileCopierDelegate> *delegate;
@property (nonatomic, readonly) BOOL didErrorOccur;
@property (readonly, retain) id identifier;
@property BOOL inProgress;
@property (readonly, retain) NSURL *inputURL;
@property unsigned int operation;
@property (readonly, retain) NSURL *outputURL;
@property (nonatomic, readonly) BOOL wasCancelled;

- (void*)_BOMCopier;
- (id /* block */)_callback;
- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_queue;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (BOOL)didErrorOccur;
- (id)identifier;
- (BOOL)inProgress;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 completionBlock:(id /* block */)arg5 queue:(id)arg6;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;
- (id)inputURL;
- (unsigned int)operation;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(BOOL)arg1;
- (void)setOperation:(unsigned int)arg1;
- (void)set_BOMCopier:(void*)arg1;
- (void)set_callback:(id /* block */)arg1;
- (void)set_queue:(id)arg1;
- (void)start;
- (BOOL)wasCancelled;

@end
