//
//  Deck.h
//  Card Games
//
//  Created by Joshua Zhou on 15/12/8.
//  Copyright © 2015年 Joshua Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
