
#include "Onboarding.h"
#include "ZGMatter/ZGMatter.h"
#include "Utiles.h"
#include "Global.h"

static NSString *parseManualPairingCode(NSString *params) {
    NSDictionary *jsonObject = parseJSONString(params);
    NSString *decimalString = requestJsonValueNotNull(jsonObject, @"pairingCode");
    ZGMTRManualSetupPayloadParser * parser = [[ZGMTRManualSetupPayloadParser alloc] initWithDecimalStringRepresentation:decimalString];
    NSError * error;
    ZGMTRSetupPayload *setupPayload = [parser populatePayload:&error];
    if (setupPayload == nil) {
        return createFlutterRequestResultWithCode(1, @{});
    }
    return createFlutterRequestResultWithCode(0, @{
        @"productId": [setupPayload productID],
        @"vendorId": [setupPayload vendorID],
        @"commissioningFlow": @([setupPayload commissioningFlow]),
        @"discriminator": [setupPayload discriminator],
        @"version": [setupPayload version],
        @"discoveryCapabilities": @[@([setupPayload discoveryCapabilities])],
        @"setupPinCode": [setupPayload setUpPINCode],
        @"hasShortDiscriminator": @([setupPayload hasShortDiscriminator])
    });
}

static NSString *parseQrCode(NSString *params) {
    NSDictionary *jsonObject = parseJSONString(params);
    NSString *qrCode = requestJsonValueNotNull(jsonObject, @"qrCode");
    ZGMTRQRCodeSetupPayloadParser * parser = [[ZGMTRQRCodeSetupPayloadParser alloc] initWithBase38Representation:qrCode];
    NSError * error;
    ZGMTRSetupPayload *setupPayload = [parser populatePayload:&error];
    if (setupPayload == nil) {
        return createFlutterRequestResultWithCode(1, @{});
    }
    return createFlutterRequestResultWithCode(0, @{
        @"productId": [setupPayload productID],
        @"vendorId": [setupPayload vendorID],
        @"commissioningFlow": @([setupPayload commissioningFlow]),
        @"discriminator": [setupPayload discriminator],
        @"version": [setupPayload version],
        @"discoveryCapabilities": @[@([setupPayload discoveryCapabilities])],
        @"setupPinCode": [setupPayload setUpPINCode],
        @"hasShortDiscriminator": @([setupPayload hasShortDiscriminator])
    });
}


void onOnboardingCall(NSString * path, NSString * params, FlutterResult result) {
    FlutterMatterLog([NSString
        stringWithFormat:@"onOnboardingCall path: %@ params: %@", path, params]);
    dispatch_async(
        dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
          dispatch_async([Global backgroundSerialQueue], ^() {
            NSString *resultData = nil;
            NSException *resultException = nil;
            @try {
                if ([path isEqualToString:@"/parseManualPairingCode"]) {
                    resultData = parseManualPairingCode(params);
                } else if ([path isEqualToString:@"/parseQrCode"]) {
                    resultData = parseQrCode(params);
                }
            } @catch (NSException *exception) {
                FlutterMatterLog([[NSString alloc]
                    initWithFormat:@"onOnboardingCall %@ Exception %@", path,
                                   [exception callStackSymbols]]);
                resultException = exception;
            } @finally {
            }

            // callback run on main
            dispatch_sync(dispatch_get_main_queue(), ^() {
              if (resultException) {
                  result([FlutterError errorWithCode:@"onOnboardingCallException"
                                             message:[resultException reason]
                                             details:nil]);
              } else if (resultData) {
                  result(resultData);
              } else {
                  result(FlutterMethodNotImplemented);
              }
            });
          });
        });
}
