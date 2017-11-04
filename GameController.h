//
//  GameController.h
//  Day 3 - Dice
//
//  Created by Murat Ekrem Kolcalar on 11/1/17.
//  Copyright © 2017 mumu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dice.h"

@interface GameController : NSObject

@property (nonatomic, strong) NSMutableArray *numbersRolled;
@property (nonatomic, strong) NSMutableArray *numbersHeld;

-(void)holdDie:(NSNumber *)heldNumber;

-(void)unHoldDie:(NSNumber *)dieNumber;

-(void)resetDice;

-(NSInteger)score;

@end
