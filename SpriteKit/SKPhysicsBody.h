/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSArray, SKNode;



@interface SKPhysicsBody : NSObject <NSCopying, NSCoding>

{

    _Bool _dynamic;

    _Bool _usesPreciseCollisionDetection;

    _Bool _allowsRotation;

    _Bool _resting;

    _Bool _affectedByGravity;

    unsigned int _categoryBitMask;

    unsigned int _collisionBitMask;

    unsigned int _contactTestBitMask;

    double _friction;

    double _restitution;

    double _linearDamping;

    double _angularDamping;

    double _density;

    double _mass;

    double _area;

    NSArray *_joints;

    SKNode *_node;

    double _angularVelocity;

    struct CGVector _velocity;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)bodyWithCircleOfRadius:(double)arg1;

+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;

+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;

+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;

+ (id)bodyWithEdgeLoopFromRect:(struct CGRect)arg1;

+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;

+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;

+ (id)copyWithZone:(struct _NSZone *)arg1;

- (id).cxx_construct;

- (void).cxx_destruct;

@property(nonatomic) _Bool affectedByGravity; // @synthesize affectedByGravity=_affectedByGravity;

- (id)allContactedBodies;

@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;

@property(nonatomic) double angularDamping; // @synthesize angularDamping=_angularDamping;

@property(nonatomic) double angularVelocity; // @synthesize angularVelocity=_angularVelocity;

- (void)applyAngularImpulse:(double)arg1;

- (void)applyForce:(struct CGVector)arg1;

- (void)applyForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;

- (void)applyImpulse:(struct CGVector)arg1;

- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;

- (void)applyTorque:(double)arg1;

@property(readonly, nonatomic) double area; // @synthesize area=_area;

@property(nonatomic) unsigned int categoryBitMask; // @synthesize categoryBitMask=_categoryBitMask;

@property(nonatomic) unsigned int collisionBitMask; // @synthesize collisionBitMask=_collisionBitMask;

@property(nonatomic) unsigned int contactTestBitMask; // @synthesize contactTestBitMask=_contactTestBitMask;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) double density; // @synthesize density=_density;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) double friction; // @synthesize friction=_friction;

- (id)initWithCoder:(id)arg1;

@property(nonatomic, getter=isDynamic) _Bool dynamic; // @synthesize dynamic=_dynamic;

@property(nonatomic, getter=isResting) _Bool resting; // @synthesize resting=_resting;

@property(readonly, nonatomic) NSArray *joints; // @synthesize joints=_joints;

@property(nonatomic) double linearDamping; // @synthesize linearDamping=_linearDamping;

@property(nonatomic) double mass; // @synthesize mass=_mass;

@property(readonly, nonatomic) SKNode *node; // @synthesize node=_node;

@property(nonatomic) double restitution; // @synthesize restitution=_restitution;

@property(nonatomic) _Bool usesPreciseCollisionDetection; // @synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection;

@property(nonatomic) struct CGVector velocity; // @synthesize velocity=_velocity;



@end


