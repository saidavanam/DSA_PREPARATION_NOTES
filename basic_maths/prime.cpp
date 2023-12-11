#include<iostream>

int main(void)
{
    int n;
    std::cout<<'Enter the number';
    std::cin>>n;

    int count=0;

    for(int i=1;i*i<=n;i++) //o(sqrt(n))
    {
        if(n%i==0)
        {
            count++;
            if(n/i!=i)
            {
                count++;
            }
        }

    }

    if(count==2)
    {
        std::cout<<true;
    }
    else
    {
        std::cout<<false;
    }
}