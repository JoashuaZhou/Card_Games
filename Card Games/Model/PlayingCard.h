//
//  PlayingCard.h
//  Card Games
//
//  Created by Joshua Zhou on 15/12/8.
//  Copyright © 2015年 Joshua Zhou. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;  // NSInteger is 64-bit on iPhone 5S and above. If you have an NSInteger that > 32-bit, it could get truncated if assgin to an int. For safer reason, use NSInteger instead of int

+ (NSUInteger)maxRank;
+ (NSArray *)validSuits;

@end
