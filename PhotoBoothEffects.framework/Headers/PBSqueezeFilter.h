/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <PhotoBoothEffects/PBSqueezeFilter.h>
#import <PhotoBoothEffects/PBFilter.h>
#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>


@interface PBSqueezeFilter : PBFilter {
	float _inputAmount;	// 8 = 0x8
	CGPoint inputPoint;	// 12 = 0xc
}
@property(assign) CGPoint inputPoint;	// G=0x4d61; S=0x4d2d; @synthesize
@property(assign) float inputAmount;	// G=0x4c45; S=0x4f45; @dynamic
- (void)setDefaults;	// 0x4cd1
// declared property getter: - (float)inputAmount;	// 0x4c45
// declared property setter: - (void)setInputAmount:(float)amount;	// 0x4f45
- (const char *)_fragmentShaderSource;	// 0x4c55
- (id)_glesUniforms;	// 0x4c79
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x4d85
// declared property getter: - (CGPoint)inputPoint;	// 0x4d61
// declared property setter: - (void)setInputPoint:(CGPoint)point;	// 0x4d2d
@end

@interface PBSqueezeFilter (OpenCL)
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x4f95
- (unsigned long)kernelArgCount;	// 0x4c65
- (/*function-pointer*/ void *)kernelWrapper;	// 0x4c69
@end
