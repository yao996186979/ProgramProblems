//
//  twoSum.hpp
//  programproblems
//
//  Created by 姚东 on 2018/12/5.
//  Copyright © 2018 姚东. All rights reserved.
//
/*
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 
 Example:
 
 Given nums = [2, 7, 11, 15], target = 9,
 
 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
 */
#ifndef twoSum_hpp
#define twoSum_hpp

#include <stdio.h>
#include <vector>
using namespace std;
vector<int>twoSum1(vector<int>& nums, int target);
vector<int>twoSum2(vector<int>& nums, int target);
#endif /* twoSum_hpp */
