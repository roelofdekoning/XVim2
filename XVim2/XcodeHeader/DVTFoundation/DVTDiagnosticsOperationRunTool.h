//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDiagnosticsOperation.h>

@class NSArray;

@interface DVTDiagnosticsOperationRunTool : DVTDiagnosticsOperation
{
    NSArray *_arguments;
}

@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;
- (void)start;
- (id)initWithFilePath:(id)arg1 arguments:(id)arg2 forceSaveToSharedDirectory:(BOOL)arg3 collector:(id)arg4;

@end

