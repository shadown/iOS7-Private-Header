/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DGLMixinFramebuffer.h"


#import "TSCH3DGLResolveFramebuffer.h"



@class TSCH3DGLFramebufferMultisample;



__attribute__((visibility("hidden")))

@interface TSCH3DGLMultisampleFramebuffer : TSCH3DGLMixinFramebuffer <TSCH3DGLResolveFramebuffer>

{

    TSCH3DGLFramebufferMultisample *mMultisample;

    _Bool mDisableDestroyAssertion;

}



+ (id)multisampleFramebufferWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;

+ (struct FramebufferAttributes)resolveAttributesFromFramebufferAttribute:(const struct FramebufferAttributes *)arg1;

- (_Bool)activateInsideSession:(id)arg1;

- (_Bool)activateResolveFramebufferInsideSession:(id)arg1;

- (void)bindColorbufferInSession:(id)arg1;

- (_Bool)bindInSession:(id)arg1;

- (void)dealloc;

- (void)destroyResourcesInSession:(id)arg1;

@property(nonatomic) _Bool disableDestroyAssertion; // @synthesize disableDestroyAssertion=mDisableDestroyAssertion;

- (void)disableSamplingInSession:(id)arg1;

- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;

- (_Bool)p_usingMultisample;

@property(readonly, nonatomic) struct FramebufferAttributes resolveAttributes;

- (struct FramebufferAttributes)resolveFramebufferAttributes;

- (id)resolveFramebufferContext;

- (id)resolveFramebufferHandleForSession:(id)arg1;

- (tvec2_3b141483)resolveFramebufferSize;

- (_Bool)resolveFramebufferValidForSession:(id)arg1;

- (id)resolvingFramebuffer;

- (_Bool)validForSession:(id)arg1;



@end


