/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer, NSMutableArray, NSString, UIPDFAnnotationController, UIPDFAnnotationView, UIPDFPage, UIPDFPopupAnnotation, UIPDFSelection;



@interface UIPDFAnnotation : NSObject

{

    struct CGPDFDictionary *_dictionary;

    struct CGColor *_color;

    void *_appearanceStream;

    struct CGPDFString *_pdfContents;

    NSString *_annotationID;

    _Bool _hidden;

    UIPDFAnnotationView *_annotationView;

    UIPDFAnnotationController *_annotationController;

    NSMutableArray *_quadPoints;

    CALayer *_drawingLayer;

    UIPDFSelection *_selection;

    _Bool editable;

    id data;

    NSString *_contents;

    long long _index;

    UIPDFPopupAnnotation *_popup;

    NSString *_associatedAnnotationID;

    UIPDFPage *_page;

    unsigned long long _tag;

}



+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (struct CGRect)Rect;

@property(nonatomic) UIPDFAnnotationController *annotationController; // @synthesize annotationController=_annotationController;

- (id)annotationID;

- (int)annotationType;

@property(retain, nonatomic) UIPDFAnnotationView *annotationView; // @synthesize annotationView=_annotationView;

- (id)archive;

@property(retain, nonatomic) NSString *associatedAnnotationID; // @synthesize associatedAnnotationID=_associatedAnnotationID;

- (struct CGRect)bounds;

- (struct CGColor *)color;

- (_Bool)containsPoint:(struct CGPoint)arg1;

@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;

@property(retain, nonatomic) id data; // @synthesize data;

- (void)dealloc;

- (id)descriptionHOLD;

- (void)drawInContext:(struct CGContext *)arg1;

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;

@property(retain, nonatomic) CALayer *drawingLayer; // @synthesize drawingLayer=_drawingLayer;

@property(nonatomic) _Bool editable; // @synthesize editable;

- (struct CGRect)frame;

- (id)getImageNamed:(id)arg1 ofType:(id)arg2;

- (_Bool)hasPopUp;

- (_Bool)hidden;

@property(nonatomic) long long index; // @synthesize index=_index;

- (id)init;

- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;

- (void)makeQuadpointsFrom:(id)arg1;

- (struct CGPath *)newPathFromQuadPoints;

- (id)newSelection;

@property(nonatomic) UIPDFPage *page; // @synthesize page=_page;

- (const char *)pdfContents;

- (struct CGRect)popUpAnnotationRect;

@property(nonatomic) UIPDFPopupAnnotation *popup; // @synthesize popup=_popup;

@property(readonly, nonatomic) _Bool recognizeGestures; // @dynamic recognizeGestures;

- (struct CGRect)rectIn:(struct CGPDFArray *)arg1;

@property(nonatomic) UIPDFSelection *selection; // @dynamic selection;

- (void)setAnnotationID:(id)arg1;

- (void)setColor:(struct CGColor *)arg1;

- (void)setPageView:(id)arg1;

@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;

- (Class)viewClass;



@end


