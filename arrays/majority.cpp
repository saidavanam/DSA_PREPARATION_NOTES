//leetcode problem no:-169(majority element)

/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.
*/

#include<iostream>
#include<vector>
#include<algorithm>

//Brute force solution

/*scanning throughout the array and keeping track of count.
  If count>n/2 returns count.
  after completing all iterations,if we didnt find any value which is of majority then return -1
*/

int majorityElement(std::vector<int>& nums)
{
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        count=1; //remember start with count==1
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]==nums[i])
            {
                count++;
            }
        }
        if(count>nums.size()/2)
        {
            return nums[i];
        }
    }
    return -1;
}

//Time complexity is o(n^2) and space complexity is o(1)




//Better solution using hash maps

int majorityElement(std::vector<int>& nums)
{
    std::map<int,int> mpp; //key is nums[value] and values are counts of nums[values]

    for(int i=0;i<nums.size();i++)
    {
        mpp[nums[i]]++;
    }

    //Always remember to use iterators to traverse through the map.

    for(auto it:mpp)
    {
        if(it.second>nums.size()/2)
        {
            return it.first;
        }
    }
    return -1;
}

//Time complexity is o(nlogn)(ordered maps) and space complexity is o(n)


//Optimal solution

/*
***** using moore's algorithm

This algorithm works on the fact that if an element occurs more than N/2 times,
it means that the remaining elements other than this would definitely be less than N/2. So let us check the proceeding of the algorithm.

First, choose a candidate from the given set of elements if it is the same as the candidate element, increase the votes.
Otherwise, decrease the votes if votes become 0, select another new element as the new candidate and repeat the process

now calculate the count of candidate in the array,then if count>n/2 then return CANDIDATE otherwise return -1

observation-IF MAJORITY ELEMENT exists in the array then in even in the worst case,
atleast once element has occured in pairs 
OR
element will be at last

ex:-[2,4,2,8,2,7,2]
[2,4,2,8,2,2,7]

*/

 int majorityElement(vector<int>& nums) {
        int majority=nums[0],count=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==majority)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                count=0;
                majority=nums[i];
                count++;
            }
        }

        if(count>1)
        {
            return majority;
        }
        else
        {
             count=0;

           for(int i=0;i<nums.size();i++)
           {
                if(nums[i]==majority)
                {
                    count++;
                }
           }

           if(count>nums.size()/2)
           {
              return majority;
           }
           else
           {
              return -1;
           }
        }
}

//Time complexity is o(n) and space complexity is O(1)