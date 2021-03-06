/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController <UIModalViewDelegate> {
    DAAccount *_daAccount;
    BOOL _haveRegisteredForAccountsChanged;
}

@property(retain) DAAccount * daAccount;

- (void)_accountsChanged:(id)arg1;
- (void)_listenForAccountsChangedNotifications;
- (id)_navTitle;
- (id)accountDescriptionForFirstTimeSetup;
- (id)accountFromSpecifier;
- (Class)accountInfoControllerClass;
- (void)cancelButtonClicked:(id)arg1;
- (id)daAccount;
- (void)dealloc;
- (void)loadView;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (id)otherSpecifiers;
- (void)reloadAccount;
- (void)setDaAccount:(id)arg1;
- (BOOL)shouldVerifyBeforeAccountSave;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
