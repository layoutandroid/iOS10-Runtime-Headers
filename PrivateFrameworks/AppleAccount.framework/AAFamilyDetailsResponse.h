/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSString, AAFamilyMember;

@interface AAFamilyDetailsResponse : AAResponse  {
    NSArray *_members;
    bool_canAddMembers;
    bool_canAddChildMembers;
    AAFamilyMember *_organizer;
    AAFamilyMember *_me;
    NSArray *_invites;
    NSArray *_pendingMembers;
    NSString *_childAccountPrompt;
    NSString *_childAccountButtonTitle;
}

@property(readonly) NSArray * members;
@property(readonly) AAFamilyMember * organizer;
@property(readonly) AAFamilyMember * me;
@property(readonly) NSArray * invites;
@property(readonly) NSArray * pendingMembers;
@property(readonly) long long memberCount;
@property(readonly) long long pendingMemberCount;
@property(readonly) long long pendingInviteCount;
@property(readonly) bool canAddMembers;
@property(readonly) bool canAddChildMembers;
@property(readonly) NSString * childAccountPrompt;
@property(readonly) NSString * childAccountButtonTitle;
@property(readonly) NSArray * firstNames;


- (id)me;
- (id)members;
- (long long)pendingInviteCount;
- (id)childAccountButtonTitle;
- (id)childAccountPrompt;
- (bool)canAddChildMembers;
- (bool)canAddMembers;
- (id)pendingMembers;
- (id)invites;
- (id)firstNames;
- (long long)pendingMemberCount;
- (long long)memberCount;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)organizer;
- (void).cxx_destruct;

@end