//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YXTransformVideoExport : NSObject
{
    long long _processingCount;
}

+ (_Bool)transform:(struct CGAffineTransform)arg1 isEqualToAnother:(struct CGAffineTransform)arg2;
+ (struct CGAffineTransform)transformation:(id)arg1 containerSize:(struct CGSize)arg2;
+ (void)buildAutoTransformVideoWithPath:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 targetVideoSize:(struct CGSize)arg3 outputPath:(id)arg4 processingBlock:(CDUnknownBlockType)arg5 completeHanlder:(CDUnknownBlockType)arg6;
+ (id)build480X480CompositionWithAsset:(id)arg1 transform:(struct CGAffineTransform)arg2;
+ (void)buildVideoWithAsset:(id)arg1 transform:(struct CGAffineTransform)arg2 videoSize:(struct CGSize)arg3 outputPath:(id)arg4 processingBlock:(CDUnknownBlockType)arg5 completeHanlder:(CDUnknownBlockType)arg6;
+ (void)build480X480VideoWithAsset:(id)arg1 transform:(struct CGAffineTransform)arg2 outputPath:(id)arg3 processingBlock:(CDUnknownBlockType)arg4 completeHanlder:(CDUnknownBlockType)arg5;
+ (void)build480X480VideoWithPath:(id)arg1 transform:(struct CGAffineTransform)arg2 outputPath:(id)arg3 processingBlock:(CDUnknownBlockType)arg4 completeHanlder:(CDUnknownBlockType)arg5;
+ (id)sharedInstance;
@property(nonatomic) long long processingCount; // @synthesize processingCount=_processingCount;
- (_Bool)isProcessing;
- (void)append480X480ExportTaskWithComposition:(id)arg1 andOutputPath:(id)arg2;
- (void)exportVideosWithCompositions:(id)arg1 andOutputPaths:(id)arg2 processingBlock:(CDUnknownBlockType)arg3 completeHanlder:(CDUnknownBlockType)arg4;

@end

