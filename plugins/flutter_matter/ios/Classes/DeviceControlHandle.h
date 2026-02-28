#import <Flutter/Flutter.h>
#import <ZGMatter/ZGMatter.h>

@interface KeypairWarp : NSObject <ZGMTRKeypair>

@property (nonatomic, strong) NSString *handle;

- (instancetype)initWithHandle:(NSString *)handle; 

@end

@interface ZGMTRNOCChainIssuerWarp : NSObject <ZGMTRNOCChainIssuer>

@property (nonatomic, strong) NSString *handle;

- (instancetype)initWithHandle:(NSString *)handle;

@end

@interface PairingDelegateWarp : NSObject<ZGMTRDevicePairingDelegate>

@property (nonatomic, strong) NSString *handle;
@property (nonatomic, strong) ZGMTRCommissioningParameters *commissioningParameters;
@property (nonatomic, strong) ZGMTRDeviceController *deviceController;
@property (nonatomic, strong) NSNumber *deviceId;

- (instancetype)initWithHandle:(NSString *)handle commissioningParameters:(ZGMTRCommissioningParameters *)commissioningParameters deviceController:(ZGMTRDeviceController *)deviceController deviceId:(NSNumber *)deviceId;

@end


void onDeviceControlCall(NSString * path, NSString * params, FlutterResult result);
