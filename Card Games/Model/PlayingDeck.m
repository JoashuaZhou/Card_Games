//
//  PlayingDeck.m
//  Card Games
//
//  Created by Joshua Zhou on 15/12/8.
//  Copyright © 2015年 Joshua Zhou. All rights reserved.
//

#import "PlayingDeck.h"
#import "PlayingCard.h"

@implementation PlayingDeck

- (instancetype)init {
    self = [super init];    // Incase super class can't be initialize itself
    
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                [self addCard:card];
            }
        }
    }
    return self;
}

@end
