/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CACGPathCodingSegment : NSObject <NSCoding>
{
    NSInteger _type;
    struct CGPoint { 
        float x; 
        float y; 
    } _points[3];
}


- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement { NSInteger x1; struct CGPoint {} *x2; }*)arg1;
- (void)addToCGPath:(struct CGPath { }*)arg1;

@end