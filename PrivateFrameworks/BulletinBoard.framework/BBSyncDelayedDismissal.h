/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {
    BBBulletin *_bulletin;
    unsigned int _feeds;
}

@property(retain) BBBulletin * bulletin;
@property unsigned int feeds;

- (id)bulletin;
- (void)dealloc;
- (unsigned int)feeds;
- (void)setBulletin:(id)arg1;
- (void)setFeeds:(unsigned int)arg1;

@end
