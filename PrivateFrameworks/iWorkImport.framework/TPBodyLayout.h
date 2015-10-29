/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyLayout : TSDLayout <TPAttachmentLayoutParent, TSWPLayoutTarget> {
    NSMutableArray *_anchoredDrawablesForRelayout;
    NSMutableArray *_columns;
    TPFootnoteHeightMeasurer *_footnoteHeightMeasurer;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } anchorPoint;
@property (nonatomic, retain) NSMutableArray *anchoredDrawablesForRelayout;
@property (nonatomic, readonly) unsigned int autosizeFlags;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly, retain) NSMutableArray *columns;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (nonatomic, readonly) <TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct __CFLocale { }*hyphenationLocale;
@property (nonatomic, readonly) BOOL layoutIsValid;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } maskRect;
@property (nonatomic, readonly) float maxAnchorY;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } maxSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } minSize;
@property (nonatomic, readonly) int naturalAlignment;
@property (nonatomic, readonly) int naturalDirection;
@property (nonatomic, readonly) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct *nextTargetTopicNumbers; /* unknown property attribute:  true> >=L}}}II} */
@property (nonatomic, readonly) unsigned int pageCount;
@property (nonatomic, readonly) unsigned int pageNumber;
@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } position;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *previousTargetLastColumn;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct *previousTargetTopicNumbers; /* unknown property attribute:  true> >=L}}}II} */
@property (nonatomic, readonly) BOOL shouldHyphenate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL textIsVertical;
@property (nonatomic, readonly) int verticalAlignment;
@property (nonatomic, readonly) BOOL wantsLineFragments;

+ (struct CGSize { float x1; float x2; })minimumBodySize;

- (void)addAttachmentLayout:(id)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (struct CGPoint { float x1; float x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)anchoredDrawablesForRelayout;
- (unsigned int)autosizeFlags;
- (struct CGPoint { float x1; float x2; })calculatePointFromSearchReference:(id)arg1;
- (id)canvas;
- (struct CGPoint { float x1; float x2; })capturedInfoPositionForAttachment;
- (id)columnMetricsForCharIndex:(unsigned int)arg1 outRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)columns;
- (id)computeLayoutGeometry;
- (float)contentHeight;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { float x1; float x2; })currentSize;
- (void)dealloc;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (BOOL)invalidateForPageCountChange;
- (void)invalidateSize;
- (BOOL)isLastTarget;
- (BOOL)isLayoutOffscreen;
- (BOOL)layoutIsValid;
- (struct CGPoint { float x1; float x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { float x1; float x2; })arg1;
- (float)maxAnchorY;
- (struct CGSize { float x1; float x2; })maxSize;
- (struct CGSize { float x1; float x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { float x1; float x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (BOOL)needsInflation;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)nextTargetTopicNumbers;
- (id)p_attachedLayoutsInLayout:(id)arg1;
- (void)p_killDrawableLayouts:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_rectForSelection:(id)arg1 useParagraphModeRects:(BOOL)arg2;
- (id)p_validatedLayoutForDrawable:(id)arg1 inContainingLayout:(id)arg2;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;
- (id)parentLayoutForInlineAttachments;
- (void)parentWillChangeTo:(id)arg1;
- (struct CGPoint { float x1; float x2; })position;
- (id)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)previousTargetTopicNumbers;
- (BOOL)processWidowAndInflation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (void)resetColumnsAndLayouts;
- (void)setAnchoredDrawablesForRelayout:(id)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)siblingTargetIsManipulatingDrawable:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)textIsVertical;
- (void)updateStartCharIndexWithDirtyRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (int)verticalAlignment;
- (float)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(float)arg2;
- (BOOL)wantsLineFragments;

@end