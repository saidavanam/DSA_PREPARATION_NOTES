#include<iostream>

void mergesort(int *a,int start,int end);
void merge(int*a,int start,int mid,int end);

void mergesort(int *a,int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}

void merge(int*a,int start,int mid,int end)
{
    int i=start;
    int j=mid+1;
    int k=start;
    int b[end+1];

    while(i<=mid && j<=end)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    while(j<=end)
    {
        b[k]=a[j];
        j++;
        k++;
    }

    for(int i=start;i<=end;i++)
    {
        a[i]=b[i];
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

    mergesort(arr,0,n-1);

    std::cout<<"Elements in final array are"<<'\n';

      for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<'\n';
    }


}