#include<iostream>
#include<vector>

//array contains zeros,ones and twos only.sort all elements

//Brute force solution is using merge sort

/*
  Time complexity is o(nlogn)
  space complexity is o(n)
*/

//Better solution

void sort_arrays(vector<int>&nums)
{
    int count0=0,count1=0,count2=0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            count0++;
        }
        else if(nums[i]==1)
        {
            count1++;
        }
        else{
            count2++;
        }
    }

    for(int i=0;i<count0;i++)
    {
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++)
    {
        arr[i]=1;
    }
    for(int i=count0+count1;i<nums.size();i++)
    {
        arr[i]=2;
    }
}

/*
   Time complexity is o(2n)
   space complexity is o(1)
*/

//Optimal solution using DUTCH NATIONAL FLAG ALGORITHM

/*
    we will be using 3 pointers(low,mid,high)

    we will be using mid for iteration.

    The idea is simple that we will be seperating 0 and 2's from 1's.

    Rules:-

    [0,....low-1]->sorted and should contain zeros

    [low....mid-1]->sorted and should contain ones

    [mid....high]->unsorted

    [high+1....n-1]->sorted and should contain twos only 

    do this process until mid crosses high
*/

//leetcode problem 75(sort colors)

void sortColors(vector<int>& nums) {

        int low=0,mid=0,high=nums.size()-1;
        int temp;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++,mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                temp=nums[high];
                nums[high]=nums[mid];
                nums[mid]=temp;
                high--;
            }

        }
        
    }