#include<iostream>

//brute force is inserting elements to set and counting the elements
/*
     time complexity-o(nlogn)+o(n)
     space complexity-o(n)
*/

//optimal solution
/*
    Using two pointer method
    time complexity-o(n)
     space complexity-o(1)
*/

//leetcode problem 26

 int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;

        int n=nums.size();

        while(j<n)
        {
            if(nums[j]!=nums[i])
            {
                nums[++i]=nums[j];
            }
            j++;
        }

        return ++i;
 }        