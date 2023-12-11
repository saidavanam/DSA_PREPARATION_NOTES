#include<iostream>

void swap_arr(int *arr,int n,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    swap_arr(arr,n,start+1,end-1);

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

}

int main(void)
{
    int a;
    std::cout<<"enter the number of terms:";
    std::cin>>a;

    int arr[a];

    for(int i=0;i<a;i++)
    {
        std::cin>>arr[i];
    }
    swap_arr(arr,a,0,a-1);

    std::cout<<"array after swapping:"<<'\n';

    for(int i=0;i<a;i++)
    {
        std::cout<<arr[i]<<'\n';
    }

}