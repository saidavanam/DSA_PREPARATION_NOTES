#include<iostream>

void insertion_sort(int *arr,int i,int n)
{
        if(i==n)
        {
            return;
        }

        int hole=i;
        int value=arr[hole];
        while(hole>0 && arr[hole-1]>=value)
        {
                arr[hole]=arr[hole-1];
                hole=hole-1;
        }
        arr[hole]=value;

        insertion_sort(arr,i+1,n);

}


int main(void)
{
    int n;
    std::cout<<"Enter the no.of terms";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter the terms in array";

    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }

    insertion_sort(arr,1,n);

    std::cout<<"Elements in final array are"<<'\n';

      for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<'\n';
    }


}