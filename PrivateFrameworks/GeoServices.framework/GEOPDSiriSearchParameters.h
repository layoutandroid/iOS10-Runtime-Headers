/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDIndexQueryNode, NSString, GEOPDViewportInfo, NSData, GEOAddress, NSMutableArray;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    GEOPDIndexQueryNode *_indexFilter;
    unsigned int _maxResultCount;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
    NSData *_zilchPoints;
    bool_isStrictMapRegion;
    bool_structuredSearch;
    struct { 
        unsigned int maxResultCount : 1; 
        unsigned int sortOrder : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
    } _has;
}

@property bool hasSortOrder;
@property int sortOrder;
@property bool hasMaxResultCount;
@property unsigned int maxResultCount;
@property(readonly) bool hasSearchString;
@property(retain) NSString * searchString;
@property(readonly) bool hasViewportInfo;
@property(retain) GEOPDViewportInfo * viewportInfo;
@property(readonly) bool hasAddress;
@property(retain) GEOAddress * address;
@property(retain) NSMutableArray * businessCategoryFilters;
@property bool hasIsStrictMapRegion;
@property bool isStrictMapRegion;
@property(readonly) bool hasZilchPoints;
@property(retain) NSData * zilchPoints;
@property bool hasStructuredSearch;
@property bool structuredSearch;
@property(retain) NSMutableArray * searchSubstringDescriptors;
@property(readonly) bool hasIndexFilter;
@property(retain) GEOPDIndexQueryNode * indexFilter;


- (id)viewportInfo;
- (id)searchSubstringDescriptors;
- (id)businessCategoryFilters;
- (bool)hasMaxResultCount;
- (void)setHasMaxResultCount:(bool)arg1;
- (void)setMaxResultCount:(unsigned int)arg1;
- (unsigned int)maxResultCount;
- (id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1;
- (void)clearSearchSubstringDescriptors;
- (unsigned long long)searchSubstringDescriptorsCount;
- (id)businessCategoryFilterAtIndex:(unsigned long long)arg1;
- (void)clearBusinessCategoryFilters;
- (unsigned long long)businessCategoryFiltersCount;
- (void)addSearchSubstringDescriptor:(id)arg1;
- (void)addBusinessCategoryFilter:(id)arg1;
- (void)setSearchSubstringDescriptors:(id)arg1;
- (void)setBusinessCategoryFilters:(id)arg1;
- (bool)hasSortOrder;
- (void)setHasSortOrder:(bool)arg1;
- (bool)hasViewportInfo;
- (void)setViewportInfo:(id)arg1;
- (id)indexFilter;
- (bool)structuredSearch;
- (bool)isStrictMapRegion;
- (bool)hasIndexFilter;
- (bool)hasStructuredSearch;
- (void)setHasStructuredSearch:(bool)arg1;
- (void)setStructuredSearch:(bool)arg1;
- (bool)hasIsStrictMapRegion;
- (void)setHasIsStrictMapRegion:(bool)arg1;
- (void)setIsStrictMapRegion:(bool)arg1;
- (void)setIndexFilter:(id)arg1;
- (bool)hasAddress;
- (void)setAddress:(id)arg1;
- (id)zilchPoints;
- (bool)hasZilchPoints;
- (void)setZilchPoints:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasSearchString;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)address;
- (id)dictionaryRepresentation;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;

@end