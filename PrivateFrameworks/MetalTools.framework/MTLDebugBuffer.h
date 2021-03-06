/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugBuffer : MTLToolsBuffer {
    const void *_pointer;
    unsigned int _purgeableState;
    BOOL _purgeableStateHasBeenSet;
}

@property (nonatomic, readonly) const void*pointer;
@property (nonatomic, readonly) unsigned int purgeableState;
@property (nonatomic, readonly) BOOL purgeableStateHasBeenSet;

- (void*)contents;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned int)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned int)arg3;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;
- (const void*)pointer;
- (unsigned int)purgeableState;
- (BOOL)purgeableStateHasBeenSet;
- (unsigned int)setPurgeableState:(unsigned int)arg1;

@end
