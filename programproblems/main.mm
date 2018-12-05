//
//  main.m
//  test
//
//  Created by 姚东 on 2018/12/4.
//  Copyright © 2018 姚东. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "reverseInteger.cpp"
#import "twoSum.cpp"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        vector<int> ilist {1,2,4,5,6,7};
        twoSum(ilist, 6);
    }
    return 0;
}
