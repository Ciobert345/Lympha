


#import <Foundation/Foundation.h>
#import <ZGMatter/ZGMatter.h>


@interface DeviceAttestationDelegate : NSObject <ZGMTRDeviceAttestationDelegate>

@property (nonatomic, strong) NSString *handle;

- (instancetype)initWithHandle:(NSString *)handle;

@end
