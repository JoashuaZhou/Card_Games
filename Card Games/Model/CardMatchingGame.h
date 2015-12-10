//
//  CardMatchingGame.h
//  Card Games
//
//  Created by Joshua Zhou on 15/12/9.
//  Copyright © 2015年 Joshua Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

// designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;    // CardMatchingGame keeps the score, so it's set to readonly. Readonly means no setter but getter

@end
