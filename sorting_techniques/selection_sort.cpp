#include<iostream>

void selection_sort(int*arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=arr[min_index])
            {
                min_index=j;
            }

        }

        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
    }

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

    selection_sort(arr,n);

    std::cout<<"Elements in final array are"<<'\n';

      for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<'\n';
    }


}