/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAlignmentLayoutRelationship : NSObject <NSLayoutRelationship> {
    NSArray * _alignedAnchors;
}

@property (readonly, copy) NSArray *alignedAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly) Class superclass;

+ (id)alignmentWithAnchors:(id)arg1;

- (id)alignedAnchors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAlignedAnchors:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (id)relationshipDescription;

@end