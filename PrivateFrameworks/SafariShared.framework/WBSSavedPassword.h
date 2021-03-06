/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSavedPassword : NSObject {
    NSString * _highLevelDomain;
    NSString * _password;
    NSMutableDictionary * _siteToProtectionSpaces;
    NSMutableArray * _sites;
    NSString * _user;
    bool  _userIsNeverSaveMarker;
}

@property (nonatomic, readonly) NSString *highLevelDomain;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSArray *protectionSpaces;
@property (nonatomic, readonly) NSArray *sites;
@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) bool userIsNeverSaveMarker;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void).cxx_destruct;
- (void)_addProtectionSpace:(id)arg1 forSite:(id)arg2;
- (void)_adoptSitesFromSavedPassword:(id)arg1;
- (bool)_containsProtectionSpace:(id)arg1;
- (void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2;
- (void)_deleteCredentials;
- (void)_deleteCredentialsForSite:(id)arg1;
- (id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3;
- (void)_setUser:(id)arg1 password:(id)arg2;
- (long long)compare:(id)arg1;
- (id)description;
- (id)highLevelDomain;
- (id)password;
- (id)protectionSpaces;
- (id)sites;
- (id)user;
- (bool)userIsNeverSaveMarker;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (void)webui_getTitle:(id*)arg1 detail:(id*)arg2 forTableViewCell:(id)arg3 withSearchPattern:(id)arg4;
- (bool)webui_matchesSearchPattern:(id)arg1;

@end
