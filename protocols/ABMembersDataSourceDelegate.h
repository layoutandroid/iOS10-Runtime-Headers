/* Generated by RuntimeBrowser.
 */

@protocol ABMembersDataSourceDelegate <NSObject>

@required

- (bool)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(NSIndexPath *)arg3 withMemberCell:(UIView *)arg4 animate:(bool)arg5;
- (bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;

@optional

- (void)abScrollViewDidBeginDragging:(UIScrollView *)arg1;

@end
