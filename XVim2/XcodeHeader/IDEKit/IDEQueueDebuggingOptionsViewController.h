//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IDEQueueDebuggingOptionsViewController : IDELaunchActionOptionViewController
{
    NSButton *_enableQueueDebuggingCheckBox;
}

+ (id)keyPathsForValuesAffectingAllowEnablingQueueDebugging;
+ (BOOL)availableForScheme:(id)arg1;
@property __weak NSButton *enableQueueDebuggingCheckBox; // @synthesize enableQueueDebuggingCheckBox=_enableQueueDebuggingCheckBox;
- (void).cxx_destruct;
- (BOOL)allowEnablingQueueDebugging;
- (void)enableQueueDebuggingClicked:(id)arg1;
- (void)loadView;

@end

