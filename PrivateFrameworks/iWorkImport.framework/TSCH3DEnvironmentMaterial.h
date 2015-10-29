/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial {
    BOOL _decalMode;
}

@property (nonatomic) BOOL decalMode;

+ (id)instanceWithArchive:(const struct Chart3DEnvironmentMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DTexturesMaterialArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DBaseImageTextureTilingArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; bool x8; }*)arg1 unarchiver:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)decalMode;
- (struct MaterialShaderVariables { id x1; id x2; id x3; id x4; })defaultShaderVariables;
- (unsigned int)hash;
- (id)initWithArchive:(const struct Chart3DEnvironmentMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DTexturesMaterialArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DBaseImageTextureTilingArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; bool x8; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct Chart3DEnvironmentMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DTexturesMaterialArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DBaseImageTextureTilingArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; bool x8; }*)arg1 archiver:(id)arg2;
- (void)setDecalMode:(BOOL)arg1;

@end