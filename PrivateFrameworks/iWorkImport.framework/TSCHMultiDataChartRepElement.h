/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepElement : NSObject {
    CALayer<TSCHMultiDataElementShapeLayer> *mElementLayer;
    BOOL mElementUndefined;
    TSCHMultiDataAnimatingFrameLayer *mLabelLayer;
}

@property (nonatomic, readonly) CALayer<TSCHMultiDataElementShapeLayer> *elementLayer;
@property (nonatomic) BOOL elementUndefined;
@property (nonatomic, readonly) TSCHMultiDataAnimatingFrameLayer *labelLayer;

+ (id)elementWithElementLayer:(id)arg1;

- (void)addAnimationForKey:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 toAnimationInfo:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)elementLayer;
- (BOOL)elementUndefined;
- (id)init;
- (id)initWithElementLayer:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)labelLayer;
- (void)setContentsScale:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElementUndefined:(BOOL)arg1;
- (void)setOpacity:(float)arg1;

@end