//Brute force sol is sorting elements and last element will be the answer

//optimal solution is o(n)

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

    int largest=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    std::cout<<"Largest element in array is "<<largest;
}