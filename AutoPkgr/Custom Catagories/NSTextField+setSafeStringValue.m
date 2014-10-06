//
//  NSTextField+setStringValueSafe.m
//  AutoPkgr
//
//  Created by Eldon on 10/4/14.
//  Copyright (c) 2014 The Linde Group, Inc. All rights reserved.
//

#import "NSTextField+setSafeStringValue.h"

@implementation NSTextField (setSafeStringValue)
/**
 *  (Custom Catagory) return nil from string value if it's an blank string
 *
 *  @discussion this is useful for conditionally checking values in subsequent if statements, since the default value returned from a NSTextField is @"" which will will return True.
 *
 *  @return stringValue if not blank
 */
-(NSString *)safeStringValue
{
    NSString *aString;
    if (![self.stringValue isEqualToString:@""]) {
        aString = self.stringValue;
    }
    return aString;
}

/**
 *  (Custom Catagory) populate the text field with a string, but do not raise if the string passed in is nil
 *  @discussion this is useful when setting NSTextFileds from defaults or data sources that may not have any values yet.
 *
 *  @param aString stringValue to set
 */
-(void)setSafeStringValue:(NSString *)aString
{
    if (aString && ![aString isEqualToString:@""]) {
        [self setStringValue:aString];
    }
}
@end
