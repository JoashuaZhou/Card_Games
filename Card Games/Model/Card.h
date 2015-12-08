//
//  Card.h
//  Card Games
//
//  Created by Joshua Zhou on 15/12/8.
//  Copyright © 2015年 Joshua Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
