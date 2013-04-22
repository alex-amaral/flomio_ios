//
//  FJNFCTag.h
//  FloJack
//
//  Created by John Bullard on 9/21/12.
//  Copyright (c) 2012 Flomio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FJMessage.h"
#import "FJNDEFMessage.h"
#import "FJNDEFRecord.h"

#define NFC_FORUM_TYPE2_CC_LOC              13;

@interface FJNFCTag : NSObject

@property(nonatomic, readonly) NSData *uid;
@property(nonatomic, readonly) int  nfcForumType;
@property(nonatomic, readonly) NSData *data;
@property(nonatomic, readonly) FJNDEFMessage *ndefMessage;

- (id)initWithUid:(NSData *)theUid;
- (id)initWithUid:(NSData *)theUid andData:(NSData *)theData;
- (id)initWithUid:(NSData *)theUid andData:(NSData *)theData andType:(UInt8)type;

// Methods for parsing NFC Forum Type 2 memory.
- (FJNDEFMessage *)parseMemoryForNdefMessage;
- (FJNDEFMessage *)type2ParseMemoryForNdefMessage;

@end
