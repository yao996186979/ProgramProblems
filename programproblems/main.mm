//
//  main.m
//  test
//
//  Created by 姚东 on 2018/12/4.
//  Copyright © 2018 姚东. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "reverseInteger.cpp"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
      int a = reverseInteger(-214748364);
        NSLog(@"%d",a);
  
    }
    return 0;
}
