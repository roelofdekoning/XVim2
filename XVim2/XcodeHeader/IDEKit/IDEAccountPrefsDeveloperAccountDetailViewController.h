//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEAccountDetailsRefresherDelegate-Protocol.h>

@class DVTBorderedView, DVTTableView, IDEAccountDetailsRefresher, IDEProvisioningProfileBulkDownloader, NSArrayController, NSBox, NSImageView, NSObjectController, NSSet, NSString, NSView;

@interface IDEAccountPrefsDeveloperAccountDetailViewController : IDEViewController <IDEAccountDetailsRefresherDelegate>
{
    NSObjectController *_objectController;
    NSArrayController *_teamDescriptionsArrayController;
    NSSet *_teamDescriptions;
    DVTTableView *_teamsTable;
    NSImageView *_imageView;
    DVTBorderedView *_borderedView;
    NSView *_credentialsView;
    NSView *_passwordView;
    NSView *_tokenView;
    NSImageView *_errorImageView1;
    NSImageView *_errorImageView2;
    IDEAccountDetailsRefresher *_refresher;
    IDEProvisioningProfileBulkDownloader *_profileDownloader;
    NSBox *_separator1;
    NSBox *_separator2;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)keyPathsForValuesAffectingUserDescription;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)keyPathsForValuesAffectingDeveloperAccount;
@property(retain) NSBox *separator2; // @synthesize separator2=_separator2;
@property(retain) NSBox *separator1; // @synthesize separator1=_separator1;
@property(retain) IDEProvisioningProfileBulkDownloader *profileDownloader; // @synthesize profileDownloader=_profileDownloader;
@property(retain, nonatomic) IDEAccountDetailsRefresher *refresher; // @synthesize refresher=_refresher;
@property __weak NSImageView *errorImageView2; // @synthesize errorImageView2=_errorImageView2;
@property __weak NSImageView *errorImageView1; // @synthesize errorImageView1=_errorImageView1;
@property(retain) NSView *tokenView; // @synthesize tokenView=_tokenView;
@property(retain) NSView *passwordView; // @synthesize passwordView=_passwordView;
@property __weak NSView *credentialsView; // @synthesize credentialsView=_credentialsView;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) DVTTableView *teamsTable; // @synthesize teamsTable=_teamsTable;
@property(copy, nonatomic) NSSet *teamDescriptions; // @synthesize teamDescriptions=_teamDescriptions;
@property(retain, nonatomic) NSArrayController *teamDescriptionsArrayController; // @synthesize teamDescriptionsArrayController=_teamDescriptionsArrayController;
@property __weak NSObjectController *objectController; // @synthesize objectController=_objectController;
- (void).cxx_destruct;
- (void)clickedDownloadProfilesButton:(id)arg1;
- (void)downloadAllProfilesForTeamDescription:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)contextMenu;
- (void)_refreshUI;
- (void)refresherDidFail:(id)arg1;
- (void)refresherDidFinishWithTeamDescriptions:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)viewDetails:(id)arg1;
- (void)viewDetailsForTeam:(id)arg1;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)signInAgain:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (id)userDescription;
- (void)setPassword:(id)arg1;
- (id)password;
- (id)developerAccount;
@property(readonly, nonatomic) NSString *appleIDTitle;
- (void)primitiveInvalidate;

@end

