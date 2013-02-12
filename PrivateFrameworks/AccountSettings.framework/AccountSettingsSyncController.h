/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSArray, NSMutableDictionary, NSString, UIActionSheet, UINavigationItem, UIProgressHUD, UIProgressIndicator;

@interface AccountSettingsSyncController : PSListController <UIActionSheetDelegate> {
    id _account;
    UIActionSheet *_confirmDeleteAccountSheet;
    UIActionSheet *_confirmDisableSyncSheet;
    UIActionSheet *_confirmEnableSyncSheet;
    NSArray *_dataclassesToEnable;
    NSInteger _deleteButtonSpecifierIndex;
    BOOL _didDeleteAccount;
    BOOL _didFinishFirstSetup;
    UIProgressHUD *_hud;
    NSString *_hudText;
    BOOL _isFirstSetup;
    BOOL _isSavingSyncSettingsInBackground;
    BOOL _isUpdateSetup;
    UINavigationItem *_navigationItem;
    UIProgressIndicator *_progressIndicator;
    UIActionSheet *_reallyConfirmEnableSyncSheet;
    BOOL _showsDeleteAccountButton;
    NSMutableDictionary *_syncSettingsToSave;
}

@property BOOL didDeleteAccount; /* unknown property attribute: V_didDeleteAccount */
@property BOOL didFinishFirstSetup; /* unknown property attribute: V_didFinishFirstSetup */
@property(getter=isUpdateSetup) BOOL updateSetup; /* unknown property attribute: V_isUpdateSetup */
@property(getter=isFirstSetup) BOOL firstSetup; /* unknown property attribute: V_isFirstSetup */
@property(retain) id account; /* unknown property attribute: V_account */
@property BOOL showsDeleteAccountButton;

+ (BOOL)_doesSyncedDataExistForDataclass:(id)arg1;

- (id)_accountInfoSpecifier;
- (void)_backgroundDeleteAccountData;
- (void)_backgroundSaveSyncSettings:(id)arg1;
- (void)_beginSaveSyncSettings;
- (void)_confirmDataclassesToEnable:(id)arg1 withText:(id)arg2;
- (void)_confirmDeleteAccount:(id)arg1;
- (void)_confirmStopSyncingData:(id)arg1;
- (id)_dataclassesTextForDeleteConfirmation;
- (id)_deleteButtonSpecifier;
- (void)_didConfirmDeleteAccount:(BOOL)arg1;
- (void)_didConfirmEnableSyncSettings:(BOOL)arg1 withDataclasses:(id)arg2;
- (void)_didConfirmSaveSyncSettings:(BOOL)arg1;
- (void)_hideHUD;
- (void)_hideModalProgressAfterDelay:(double)arg1;
- (id)_localizationKeyForDataclass:(id)arg1 withSuffix:(id)arg2;
- (id)_localizedTextForDataclasses:(id)arg1;
- (void)_mainThreadFinishedDeleteAccountDataWithSuccess:(id)arg1;
- (void)_mainThreadFinishedSaveSyncSettings;
- (id)_modalProgressTextForDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)_reallyConfirmDataclassesToEnableWithText:(id)arg1;
- (void)_reallyFinishedFirstSetup;
- (void)_showModalProgress;
- (void)_showModalProgressWithText:(id)arg1 afterDelay:(double)arg2;
- (id)_viewForSheet;
- (id)account;
- (Class)accountInfoControllerClass;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (BOOL)backgroundDeleteAccountData;
- (id)confirmationTextForDataclassesToEnable:(id)arg1 forDisaplyedAccountType:(id)arg2;
- (id)confirmationTextForDataclassesToReallyEnable:(id)arg1;
- (id)createDeleteCellWithSpecifier:(id)arg1 width:(float)arg2;
- (void)dealloc;
- (void)deleteAccount;
- (void)deleteAccountAndData;
- (BOOL)didDeleteAccount;
- (BOOL)didFinishFirstSetup;
- (void)doneButtonClicked:(id)arg1;
- (id)firstSetupInitialSettings;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)isDataclassEnabled:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isFirstSetup;
- (BOOL)isUpdateSetup;
- (id)navigationItem;
- (id)navigationTitle;
- (id)otherSpecifiers;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (void)saveSyncSettings:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setDataclassEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDidDeleteAccount:(BOOL)arg1;
- (void)setDidFinishFirstSetup:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setFirstSetup:(BOOL)arg1;
- (void)setShowsDeleteAccountButton:(BOOL)arg1;
- (void)setUpdateSetup:(BOOL)arg1;
- (BOOL)shouldInitiallyEnableDataclass:(id)arg1;
- (BOOL)showsDeleteAccountButton;
- (id)specifiers;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)viewWillRedisplay;

@end