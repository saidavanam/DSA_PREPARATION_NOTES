//brute force sol is sorting the elements and find 2nd largest.time complexity is o(nlogn)+o(n)

//better solution is 0(n+n)

//optimal solution is o(n)

#include<iostream>

void better_sol(int *arr,int n)
{
    
    int largest=INT8_MIN;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

     int second_largest=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>second_largest && arr[i]<largest)
        {
            second_largest=arr[i];
        }
    }


    std::cout<<"Second Largest element in array is "<<second_largest<<'\n';
}

//(****)

void optimal(int*arr,int n)
{
    int largest=arr[0];
    int second_largest=INT8_MIN;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else
        {
            if(arr[i]>second_largest && arr[i]<largest)
            {
                second_largest=arr[i];
            }
        }
    }

    std::cout<<"Second Largest element in array is "<<second_largest<<'\n';

}

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

    better_sol(arr,n);
    optimal(arr,n);
   
}