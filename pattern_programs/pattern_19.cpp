#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            std::cout<<'*';
        }
        for(int j=n-i+1;j<=n+i;j++)
        {
            std::cout<<' ';
        }
        for(int j=n+i+1;j<=2*n;j++)
        {
            std::cout<<'*';
        }
        std::cout<<'\n';

    }

      int p=2*n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=p;j++)
        {
            if(j<=i || j>p-i)
            {
                std::cout<<'*';
            }
            else
            {
                std::cout<<' ';
            }
        }

        std::cout<<'\n';
    }

}