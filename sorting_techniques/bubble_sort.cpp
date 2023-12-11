#include<iostream>

void bubble_sort(int*arr,int n)
{
    int counter=1;
    while(counter!=0)
    {
        counter=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                counter++;
            }
        }
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

    bubble_sort(arr,n);

    std::cout<<"Elements in final array are"<<'\n';

      for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<'\n';
    }


}