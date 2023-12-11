//Optimal solution

void rotate_by_one_place(int* arr,int n)
{
    int temp=arr[0];

    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }

    arr[n-1]=temp;
}

/*
    {1,2,3,4,5}
    storing 1 as temp and remaining shifting by one place and storing temp at last place
*/