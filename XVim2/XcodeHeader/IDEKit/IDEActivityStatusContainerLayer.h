//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IDEKit/IDEActivityThemeableLayer-Protocol.h>

@class IDEActivityStatusContainerLabelLayer, IDEActivityView, NSArray, NSMapTable, NSMutableArray, NSString;

@interface IDEActivityStatusContainerLayer : CALayer <IDEActivityThemeableLayer>
{
    CDUnknownBlockType _statusCategoryClickHandler;
    IDEActivityStatusContainerLabelLayer *_labelLayer;
    NSMutableArray *_visibleStatusCategories;
    NSMapTable *_statusCategoryToObservationTokenMap;
    NSMapTable *_statusCategoryToHidingValidatorMap;
    NSMapTable *_statusCategoryToLayerMap;
    NSMapTable *_statusCategoryToHandlerMap;
    NSString *_rootContainerLabel;
    NSString *_emptyRootContainerLabel;
    NSArray *_statusCategories;
    BOOL _isActiveWindowStyle;
    IDEActivityView *_activityView;
    CALayer *_emptyRootContainerLayer;
    struct CGSize _preferredSize;
}

@property(retain) CALayer *emptyRootContainerLayer; // @synthesize emptyRootContainerLayer=_emptyRootContainerLayer;
@property(retain) IDEActivityView *activityView; // @synthesize activityView=_activityView;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly) NSArray *visibleStatusCategories; // @synthesize visibleStatusCategories=_visibleStatusCategories;
@property(copy, nonatomic) CDUnknownBlockType statusCategoryClickHandler; // @synthesize statusCategoryClickHandler=_statusCategoryClickHandler;
@property(copy, nonatomic) NSString *emptyRootContainerLabel; // @synthesize emptyRootContainerLabel=_emptyRootContainerLabel;
@property(copy, nonatomic) NSString *rootContainerLabel; // @synthesize rootContainerLabel=_rootContainerLabel;
@property(copy, nonatomic) NSArray *statusCategories; // @synthesize statusCategories=_statusCategories;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)dvt_view;
@property BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
- (void)updateTheme;
- (void)sizeToFit;
- (void)layoutSublayers;
- (void)updateClickHandlerDisableState:(BOOL)arg1;
- (void)addVisibleStatusCategory:(id)arg1;
- (void)removeVisibleStatusCategory:(id)arg1;
- (id)orderedStatusCategoryLayers;
- (id)_buildEmptyRootContainerLayer;
- (id)textAttributes;
- (void)addLayerForCategory:(id)arg1;
- (id)makeLayerForCategory:(id)arg1;
- (id)statusLayerEffectiveAppearance;
- (void)removeLayerForCategory:(id)arg1;
- (id)layerForCategory:(id)arg1;
- (void)setStatusClickHandlerForCategory:(id)arg1 clickHandler:(CDUnknownBlockType)arg2;
- (id)effectiveStatusContextLabel;
- (void)categoryDidChangeCount:(id)arg1;
- (void)stopObservingCategory:(id)arg1;
- (void)startObservingCategory:(id)arg1;
- (id)hidingValidatorForCategory:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

