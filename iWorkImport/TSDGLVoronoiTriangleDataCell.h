/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSDGLVoronoiTriangleDataCell : NSObject

{

    unsigned long long _triangleCount;

    unsigned long long _vertexCount;

    CDStruct_b2fbf00d *_vertexData;

    CDStruct_6e3f967a _centerPoint;

    struct CGRect _bounds;

}



- (id).cxx_construct;

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;

- (id)cellsBySplittingCellIntoTriangles;

@property(readonly, nonatomic) CDStruct_b2fbf00d centerPoint; // @synthesize centerPoint=_centerPoint;

- (void)dealloc;

- (id)initWithEdges:(vector_5a9f1b73)arg1;

- (id)initWithTrianglePoints:(CDStruct_b2fbf00d *)arg1;

- (void)p_setupTriangleDataWithEdges:(vector_5a9f1b73)arg1;

@property(readonly, nonatomic) unsigned long long triangleCount; // @synthesize triangleCount=_triangleCount;

@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;

@property(readonly, nonatomic) CDStruct_b2fbf00d *vertexData; // @synthesize vertexData=_vertexData;



@end


