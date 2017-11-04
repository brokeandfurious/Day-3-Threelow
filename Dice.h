//
//  Dice.h
//  Day 3 - Dice
//
//  Created by Murat Ekrem Kolcalar on 11/1/17.
//  Copyright © 2017 mumu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dice : NSObject

@property (nonatomic, assign) NSNumber *dieNumber;
@property (nonatomic, strong) NSArray *numbersOnDie;
//@property (nonatomic, strong) NSArray *diceArray;

-(NSNumber *)randomize;

-(NSString *)dieValue: (NSNumber *)dieNumber;

@end
