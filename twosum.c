#include <stdio.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int * retarr = malloc(2* sizeof(int));
    retarr[0] = 1;
    retarr[1] = 1;
    for ( int i = 0; i < numsSize; i++) {
        for (int k = i +1 ; k < numsSize; k++) { 
            if (nums[i] + nums[k] == target) 
            {
                *returnSize = 2;
                retarr[0] = i;
                retarr[1] = k;
                return retarr;
            }
        }
    }
    *returnSize = 0;
    retrun NULL;
}