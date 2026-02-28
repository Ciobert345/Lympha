//
//  ZGTlv.h
//  ZGMatter
//
//  Created by zero on 28/4/2025.
//

#import <Foundation/Foundation.h>
#import "ZGMatter/ZGMTRDefines.h"

ZGMTR_EXPORT


//NSString * const ZGMTRPreviousDataKey = @"previousData";
//NSString * const ZGMTRDataVersionKey = @"dataVersion";

//NSString * const ZGMTRAttributePathKey = @"attributePath";
//NSString * const ZGMTRCommandPathKey = @"commandPath";
//NSString * const ZGMTREventPathKey = @"eventPath";
//NSString * const ZGMTRDataKey = @"data";
//NSString * const ZGMTRErrorKey = @"error";
//NSString * const ZGMTRTypeKey = @"type";
//NSString * const ZGMTRValueKey = @"value";
//NSString * const ZGMTRContextTagKey = @"contextTag";
//NSString * const ZGMTRSignedIntegerValueType = @"SignedInteger";
//NSString * const ZGMTRUnsignedIntegerValueType = @"UnsignedInteger";
//NSString * const ZGMTRBooleanValueType = @"Boolean";
//NSString * const ZGMTRUTF8StringValueType = @"UTF8String";
//NSString * const ZGMTROctetStringValueType = @"OctetString";
//NSString * const ZGMTRFloatValueType = @"Float";
//NSString * const ZGMTRDoubleValueType = @"Double";
//NSString * const ZGMTRNullValueType = @"Null";
//NSString * const ZGMTRStructureValueType = @"Structure";
//NSString * const ZGMTRArrayValueType = @"Array";
//NSString * const ZGMTREventNumberKey = @"eventNumber";
//NSString * const ZGMTREventPriorityKey = @"eventPriority";
//NSString * const ZGMTREventTimeTypeKey = @"eventTimeType";
//NSString * const ZGMTREventSystemUpTimeKey = @"eventSystemUpTime";
//NSString * const ZGMTREventTimestampDateKey = @"eventTimestampDate";
//NSString * const ZGMTREventIsHistoricalKey = @"eventIsHistorical";
//NSString * const ZGMTRValueDecodTypeKey = @"valueDecodType";
//NSString * const ZGMTRNSDataDecodKey = @"NSDataDecod";

@interface ZGTlv : NSObject
+(NSDictionary<NSString *, id> * _Nullable) decodeDataValueDictionaryFromCHIPTLV:(NSData * _Nullable ) data;
@end
