#include<iostream>
#include<algorithm>
#include<vector>

/*
   variety 1:-yes or no
   variety 2:-return the indexes
*/

//Brute force solution in c

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int*arr=malloc(2*sizeof(int));
    *returnSize=2;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                arr[0]=i;
                arr[1]=j;
            }

        }
    }
    return arr;

}

//applicable for variety 1 and 2

/*
   Time complexity is o(n^2)
   space complexity is o(1)
*/

//Better solution using hashmaps where element in hashmap contains nums[value] as key and index as value

//see the solution properly

vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> mpp;
        int more;
        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            more=target-nums[i];
            if(mpp.find(more)!=mpp.end())
            {
                return {mpp[more],i}; //returning the vector

            }
             mpp[nums[i]]=i;

        }

        return {-1,-1}; //failure case
        
}

//applicable for variety 1 and 2

/*
   Time complexity is o(nlogn) for ordered map 
   o(n) for unordered map.o(n^2) also possible which occurs very rare

   space complexity is o(n)
*/


//optimal solution applicable for VARIETY 1 ONLY

//using two pointer approach

bool find_two_sum(vector<int>& nums, int target)
{
    sort(v,v+nums.size());

    int start=0,end=0;

    while(start<end)
    {
        if(nums[start]+nums[end]==target)
        {
            return true;
        }
        else if(nums[start]+nums[end]>target)
        {
            end--;
        }
        else{
            start++;
        }
    }

    return false;

}

/*
   Time complexity is o(n)+o(nlogn) equals o(nlogn)
   space complexity is o(1) 

   diff between better and optima approach is space complexity but when we try to use this approach for 2nd variety,
   space complexity remains o(n)
*/



