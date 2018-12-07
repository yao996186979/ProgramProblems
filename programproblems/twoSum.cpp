//
//  twoSum.cpp
//  programproblems
//
//  Created by 姚东 on 2018/12/5.
//  Copyright © 2018 姚东. All rights reserved.
//

#include "twoSum.hpp"
#include <algorithm>
//Runtime: 108 ms, faster than 30.32% of C++ online submissions for Two Sum.
vector<int>twoSum1(vector<int>& nums, int target) {
    vector<int> ilist {};
   
    for (int i = 0;i<nums.size();i++){
        int n = nums.at(i);
        for (int j = i+1; j< nums.size(); j++) {
            int m = nums.at(j);
            if (n + m == target){
                ilist.push_back(i);
                ilist.push_back(j);
                break;
            }
        }
    }
    return ilist;
}
vector<int>twoSum2(vector<int>& nums, int target) {
    vector<int> ilist {};
    vector<int>::iterator location;
 
    for (int i = 0; i< nums.size(); i++){
        int n = nums.at(i);
        int m = target - n;
        location = find(nums.begin(),nums.end(), m);
         ilist.push_back(i);
    }
    for (int i = 0; i< nums.size(); i++){
        int n = nums.at(i);
        if (n == *location){
            ilist.push_back(i);
        }
    }
    return ilist;
}
