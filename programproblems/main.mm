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
        vector<int> ilist {1,2,4,3,8};
        twoSum2(ilist, 9);
    }
    return 0;
}
