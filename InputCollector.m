//
//  InputCollector.m
//  Day 3 - Dice
//
//  Created by Murat Ekrem Kolcalar on 11/1/17.
//  Copyright © 2017 mumu. All rights reserved.
//

#import "InputCollector.h"

@implementation InputCollector

-(NSString *)inputForPrompt:(NSString *)promptString {
    
    // Show promptString
    NSLog(@"%@", promptString);
    
    // Collect input with fgets / scanf
    char inputChars[255];
    scanf("%s", inputChars);
    
    // Return input as NSString
    NSString *inputString = [[NSString stringWithUTF8String:inputChars] stringByReplacingOccurrencesOfString:@"\n" withString:@""];
    return inputString;
}

@end
