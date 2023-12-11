#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            std::cout<<' ';
        }
        std::cout<<'*';
        if(i!=0)
        {
           for(int j=0;j<2*(i-1)+1;j++)
           {
              std::cout<<' ';
           }
           std::cout<<'*';
        }
        std::cout<<'\n';
    }

     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            std::cout<<' ';
        }
        std::cout<<'*';
        if(i!=0)
        {
           for(int j=0;j<2*(i-1)+1;j++)
           {
              std::cout<<' ';
           }
           std::cout<<'*';
        }
        std::cout<<'\n';
    }

    
}