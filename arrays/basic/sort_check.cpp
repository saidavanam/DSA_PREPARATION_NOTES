#include<iostream>

int main(void)
{
     int n;
    std::cout<<"Enter the no.of elements";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter elements in array";

    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            std::cout<<"array is not sorted\n";
            return 1;
        }
    }
    std::cout<<"array is sorted\n";
    return 0;
}