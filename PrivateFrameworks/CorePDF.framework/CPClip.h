/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */



@interface CPClip : NSObject <CPDisposable>
{
    struct CGPath { } *path;
    NSInteger windingRule;
}


- (NSInteger)windingRule;
- (void)finalize;
- (struct CGPath { }*)path;
- (void)dealloc;
- (id)initWithPath:(struct CGPath { }*)arg1 windingRule:(NSInteger)arg2;
- (void)dispose;

@end