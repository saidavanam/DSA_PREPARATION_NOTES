#include<iostream>

// leetcode problem 1752
/*
   *** Optimised one.
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }
}

/*
   This C++ code defines a class Solution with a member function check that 
   checks if a given vector of integers nums can be rotated to become a sorted array with at most one inversion 
   (an inversion is a pair of elements in the wrong order). 
*/