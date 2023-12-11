#include<iostream>

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void recursive_bubble_sort(int *arr,int n)
{
      if (n == 1) return;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
           swap(&arr[j],&arr[j+1]);
        }
    }

    //Range reduced after recursion:
    recursive_bubble_sort(arr, n - 1);
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

    recursive_bubble_sort(arr,n);

    std::cout<<"Elements in final array are"<<'\n';

      for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<'\n';
    }

}