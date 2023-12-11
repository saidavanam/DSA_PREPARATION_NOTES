#include<iostream>

/*
     Brute force:-

     Rotation done by k%n places.

     do note rotation is left

     rotations=3

     {1,2,3,4,5,6,7}->{4,5,6,7,1,2,3}(temp={1,2,3} temp stores fFIRST k elements)

      //rotate array by 3 rotations to left is equivalent to shifting k places left of n-k elements({4,5,6,7})

*/

void rotate_by_places(int *nums,int n,int k) 
{

        k=k%n;

        int temp[k];

        for(int i=0;i<k;i++)
        {
            temp[i]=nums[i];
        }

        for(int i=k;i<n;i++)
        {
            nums[i-k]=nums[i];
        }

        for(int i=0;i<k;i++)
        {
            nums[n-k+i]=temp[i];
        }


}

int main(void)
{
    int n;
    std::cout<<"Enter the no.of elements";
    std::cin>>n;

    int k;
    std::cout<<"Enter the no. of elements to be rotated";
    std::cin>>k;

    int arr[n];

    std::cout<<"Enter elements in array";

    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }

    rotate_by_places(arr,n,k);

    std::cout<<"array after rotating\n";

    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i];
    }

}

/*
   Optimal solution:-Using reverse function.
*/

void reverse(int *arr,int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

void rotate_by_places(int *arr,int n,int k)
{
    reverse(arr,0,k-1);// reversing first k elements
    reverse(arr,k,n-1);// reversing n-k elements
    reverse(arr,0,n-1);//reversing whole array
}