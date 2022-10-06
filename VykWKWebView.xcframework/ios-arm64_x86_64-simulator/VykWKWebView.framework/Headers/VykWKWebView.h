//
//  VykWKWebView.h
//  VykWKWebView
//
//  Created by Chris on 24/08/2022.
//

#import <Foundation/Foundation.h>

//! Project version number for VykWKWebView.
FOUNDATION_EXPORT double VykWKWebViewVersionNumber;

//! Project version string for VykWKWebView.
FOUNDATION_EXPORT const unsigned char VykWKWebViewVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VykWKWebView/PublicHeader.h>

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ConversionUtils : NSObject

-(void )setDebugView:(UIView *)view ;

-(void )setMaskDebugView:(UIView *)view ;

- (int )MTLtexturestoImage:(id<MTLTexture>) metalTextureY
             chromaTexture:(id<MTLTexture>) metalTextureCbCr
                   dataPtr:(unsigned char *)dataPtr
             dataPtrLength:(int )dataPtrLength
          destinationWidth:(int )destinationWidth
         destinationHeight:(int )destinationHeight
                  rotation:(float )rotation;

- (int )MTLmaskTexturetoImage:(id<MTLTexture>) maskTexture
                       dataPtr:(unsigned char *)dataPtr
                dataPtrLength:(int )dataPtrLength
             destinationWidth:(int )destinationWidth
            destinationHeight:(int )destinationHeight
                     rotation:(float )rotation;

- (int )TestingMTLmaskTexturetoImage:(int ) maskTexture ;
- (int )TestingMTLmaskTexturetoImage2:(id<MTLTexture>) maskTexture ;
- (int )TestingMTLmaskTexturetoImage3:(id<MTLTexture>) metalTextureY
                        chromaTexture:(id<MTLTexture>) metalTextureCbCr ;
-(id<MTLTexture> )castToMTLTexture:(const void *)pointerToCast ;

-(void )setMetalLibraryPath:(NSString *)path ;

-(CVPixelBufferRef )DatatoCVPixelBuffer:(NSData *)data width: (int )width height: (int )height ;

-(void )putUIimageOnDbgMaskView:(UIImage *) myImage ;

-(id<MTLDevice> )getMetalDevice ;

-(void )DrawIntoTextureFromTexture:(id<MTLTexture>)sourceTexture targetTexture:(id<MTLTexture>)targetTexture ;
@end

