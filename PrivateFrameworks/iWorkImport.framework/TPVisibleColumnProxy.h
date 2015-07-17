/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {
    TPPageController *_pageController;
    unsigned int _pageIndex;
}

@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } anchoredRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int nextWidowPullsDownFromCharIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic, readonly) unsigned int startAnchoredCharIndex;
@property (nonatomic, readonly) unsigned int startCharIndex;
@property (readonly) Class superclass;

- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRange;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned int)arg1 pageController:(id)arg2;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (const struct TSWPTargetHint { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; unsigned int x6; }*)p_targetFirstHint;
- (const struct TSWPTargetHint { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; unsigned int x6; }*)p_targetLastHint;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)startCharIndex;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;

@end