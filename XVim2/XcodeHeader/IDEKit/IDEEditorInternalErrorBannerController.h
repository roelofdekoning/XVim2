//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorBannerController.h>

@class NSDictionary, NSURL;
@protocol IDEEditorInternalErrorBannerControllerDelegate;

@interface IDEEditorInternalErrorBannerController : IDEEditorBannerController
{
    NSURL *_reportErrorURL;
    NSDictionary *_context;
    id <IDEEditorInternalErrorBannerControllerDelegate> _internalErrorDelegate;
}

+ (id)defaultComponent;
+ (id)defaultMessageText;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(nonatomic) __weak id <IDEEditorInternalErrorBannerControllerDelegate> internalErrorDelegate; // @synthesize internalErrorDelegate=_internalErrorDelegate;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) NSURL *reportErrorURL; // @synthesize reportErrorURL=_reportErrorURL;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end
