#import <WebKit/WebKit.h>

 NS_ASSUME_NONNULL_BEGIN

@interface WKWebView (CTMViewCapture)
-(void)CTMContentCaptureCompletionHandler:(void(^)(UIImage*capturedImage))completionHandler;

 -(void)CTMContentCaptureWithoutOffsetCompletionHandler:(void(^)(UIImage *capturedImage))completionHandler;

@end

NS_ASSUME_NONNULL_END