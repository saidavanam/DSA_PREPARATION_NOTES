#include<iostream>

//leetcode problem 189

/*
      vector v={1,2,3,4,5,6,7}

      temp={5,6,7}(last three elements)

      remaining n-k elements

        for(int i=n-1;i>=k;i--) // adding elements in reverse
        {
            nums[i]=nums[i-k];
        }

        now add temp at first


*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        k=k%n;

        vector<int>temp(k);

        for(int i=n-k;i<n;i++)
        {
            temp[i-(n-k)]=nums[i];
        }

        for(int i=n-1;i>=k;i--)
        {
            nums[i]=nums[i-k];
        }

        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }


    }
};

/*
     reverse last k elements
     reverse 0 to n-k-1 elements
     reverse whole vector

     Both approaches have same time complexity(o(n)) but 2nd approach takes less time on average scale.
     Also 2nd approach doesnt take extra space like first one.
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int nums_size = nums.size();
        k = k % nums.size();
        if(k!=0)
        {
            reverse(nums.end() - k, nums.end());
            reverse(nums.begin(), nums.end() - k);
            reverse(nums.begin(), nums.end());
        }
    }
};