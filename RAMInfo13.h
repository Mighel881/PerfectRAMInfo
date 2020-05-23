@interface SBCoverSheetPresentationManager: NSObject
+ (id)sharedInstance;
- (BOOL)_isEffectivelyLocked;
- (BOOL)isPresented;
@end

@interface RamInfo: NSObject
{
    UIWindow *ramInfoWindow;
    UILabel *ramInfoLabel;
    SBCoverSheetPresentationManager *coverSheetPresentationManagerInstance;
    UIColor *backupForegroundColor;
    UIColor *backupBackgroundColor;
}
- (id)init;
- (void)updateOrientation;
- (void)updateFrame;
- (void)updateRAMInfoSize;
- (void)updateText;
- (void)updateTextColor: (UIColor*)color;
- (void)openDoubleTapApp;
- (void)openHoldApp;
- (void)hideIfNeeded;
@end

@interface UIScreen ()
- (CGRect)_referenceBounds;
@end

@interface UIWindow ()
- (void)_setSecure: (BOOL)arg1;
@end

@interface SBApplication: NSObject
- (NSString*)bundleIdentifier;
@end

@interface SpringBoard: UIApplication
- (id)_accessibilityFrontMostApplication;
- (void)frontDisplayDidChange: (id)arg1;
@end

@interface UIApplication ()
- (UIDeviceOrientation)_frontMostAppOrientation;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
@end

@interface _UIStatusBarStyleAttributes: NSObject
@property(nonatomic, copy) UIColor *imageTintColor;
@end

@interface _UIStatusBar: UIView
@property(nonatomic, retain) _UIStatusBarStyleAttributes *styleAttributes;
@end
