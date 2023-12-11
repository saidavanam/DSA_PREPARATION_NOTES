//Here all the permutations have to be written in sorted order.Next permuatation of last one is first one

#include<iostream>
#include<vector>
#include<algorithm>

/*Brute force solution
1)Generate all sorted permuatations using recursion
2)do linear search to find element
3)print next element
*/
//time complexity will be very high.In the order of O(n*n!)

/*Better solution

1)longer prefix match(iterate in reverse order and find a break point where a[i]<a[i+1])
2)swap a[i]
3)now sort the elements that starts from a[i+1]
4)the ans u will get is the next permutation
*/

//"no instance of overloaded function "std::reverse" matches the argument list" error occurs when u gave wrong number of arguments.

void nextPermutation(std::vector<int> &nums) 
{

       //finding break point
        int i=0;
        int n=nums.size();

        for(i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                break;
            }
        }

        if(i==0)
        {
            std::reverse(nums.begin(),nums.end());
        }
        else
        {
            //i will be the break point

        //swap a[i-1] with next min element found in remaining part of array

        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(nums[min_index]>nums[j] && nums[j]>nums[i-1])
            {
                min_index=j;
            }
        }

        int temp=nums[i-1];
        nums[i-1]=nums[min_index];
        nums[min_index]=temp;


        

        //Now sort the elements from ith position to till last
        std::sort(nums.begin()+i,nums.end());
        }

    }


int main(void)
{
    std::vector<int>v={1,1,5};
    nextPermutation(v);
    for (std::vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        std::cout<<*(it)<<'\n';
    }
    
}