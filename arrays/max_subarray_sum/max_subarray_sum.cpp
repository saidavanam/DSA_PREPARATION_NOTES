#include<iostream>
#include<vector>


//subarray->contiguous part of array

/*
  Brute force solution:- using nested for loops.
  first loop:-from i=0 to n-1
  second loop:-from j=i+1 to n-1 and a[j] is added to the sum and compare with max.if element is greater than max,update max=element.
*/

 int maxSubArray(vector<int>& nums) 
 {

      int max=INT32_MIN,sum=0;

    for(int i=0;i<nums.size();i++)
    {
        sum=0;
        for(int j=i;j<nums.size();j++)
        {
            sum+=nums[j];
            if(sum>=max)
            {
                max=sum;
            }

        }
    }

    return max;
}

//time complexity is o(n^2) and space complexity is o(1)







/*
Optimal solution is by using KADANE'S ALGORITHM
*/

int maxSubArray(vector<int>& nums) 
{
        int max=INT_MIN,sum=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>max)
            {
                max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }

        return max;
        
}

//Trace the solution-{-2,-3,4,-1,-2,1,5,-3} maximum sum is 7 and sub array is {4,-1,-2,1,5}