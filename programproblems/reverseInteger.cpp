//
//  reverseInteger.cpp
//  programproblems
//
//  Created by 姚东 on 2018/12/5.
//  Copyright © 2018 姚东. All rights reserved.
//

#include "reverseInteger.hpp"
#include <math.h>
/*  翻转越界问题解决方案
情况1：中间欲加值越界（欲加值=结果位*结果未倍数）
情况2：相加最终结果越界
 */
int reverseInteger(int x){
    bool isRight = x > 0;
    x = fabs(x);
    int x_caculte1 = x;
    int x_caculte2 = x;
    //获取整形长度
    int count = 0;
    while (x_caculte1>0) {
        x_caculte1=x_caculte1/10;
        count++;
    }
    //更改
    int number = 0;
    int needMultipleIndex = 0;
    for (int i= count;i>0;i--){
        int multipleBefore = pow(10, i-1);
        int multipleAfter  = pow(10, count - i);
        
        
        int middle = x_caculte2 / multipleBefore;
  
        int indexNumber = 0;
        if (middle == 0 ) {
            if (count == 0) {
                //如果是个位数上的0 不做处理
                break;
            }
            else{
                //中间的0只需给number在下一位的时候多进一位
                needMultipleIndex = count - 1;
                continue;
            }
        }
        else{
            
            indexNumber = middle * multipleBefore;
            x_caculte2 = x_caculte2 - indexNumber;
            if (i == needMultipleIndex) {
                
                number = (number + middle * multipleAfter)*10;
            }
            else{
                //若果最大整数/位数 < 倍数，证明越界
                if (INT_MAX/middle < multipleAfter){
                    return 0;
                }
                number = number + middle * multipleAfter;
                
            }
        }
       
    }
    
    if (number < 0){
        return 0;
    }
    else{
        if (!isRight) {
            number = -number;
        }
        
        return number;
    }
    
    
    
}


