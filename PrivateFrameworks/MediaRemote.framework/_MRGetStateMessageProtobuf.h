/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGetStateMessageProtobuf : PBCodable <NSCopying> {
    NSData *_nowPlayingApplicationInfoDigest;
    NSData *_nowPlayingInfoDigest;
    NSData *_playbackQueueDigest;
    NSData *_supportedCommandsDigest;
}

@property (nonatomic, readonly) BOOL hasNowPlayingApplicationInfoDigest;
@property (nonatomic, readonly) BOOL hasNowPlayingInfoDigest;
@property (nonatomic, readonly) BOOL hasPlaybackQueueDigest;
@property (nonatomic, readonly) BOOL hasSupportedCommandsDigest;
@property (nonatomic, retain) NSData *nowPlayingApplicationInfoDigest;
@property (nonatomic, retain) NSData *nowPlayingInfoDigest;
@property (nonatomic, retain) NSData *playbackQueueDigest;
@property (nonatomic, retain) NSData *supportedCommandsDigest;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNowPlayingApplicationInfoDigest;
- (BOOL)hasNowPlayingInfoDigest;
- (BOOL)hasPlaybackQueueDigest;
- (BOOL)hasSupportedCommandsDigest;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingApplicationInfoDigest;
- (id)nowPlayingInfoDigest;
- (id)playbackQueueDigest;
- (BOOL)readFrom:(id)arg1;
- (void)setNowPlayingApplicationInfoDigest:(id)arg1;
- (void)setNowPlayingInfoDigest:(id)arg1;
- (void)setPlaybackQueueDigest:(id)arg1;
- (void)setSupportedCommandsDigest:(id)arg1;
- (id)supportedCommandsDigest;
- (void)writeTo:(id)arg1;

@end