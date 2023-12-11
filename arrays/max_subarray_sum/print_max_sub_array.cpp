#include<iostream>
#include<vector>

//Follow up question:-Print max_sub_array.

std::vector<int> max_sub_array(std::vector<int>& nums)
{
        int max=INT32_MIN,sum=0;

        auto array=std::vector<int>(2);//array[0]=start,array[1]=end

        for(int i=0;i<nums.size();i++)
        {
            if(sum==0)
            {
                array[0]=i;
            }
            sum+=nums[i];
            if(sum>max)
            {
                max=sum;
                array[1]=i;
            }
            if(sum<0)
            {
                sum=0;
            }
        }

        return array;
}

int main(void)
{
    std::vector<int> nums={-2,-3,4,-1,-2,1,5,-3};

    auto max_subarray=max_sub_array(nums); //contains start and end indices.

    for(int i=max_subarray[0];i<=max_subarray[1];i++)
    {
        std::cout<<nums[i]<<'\n';
    }

    

}

//Time complexity is o(n) and space complexity is o(2)