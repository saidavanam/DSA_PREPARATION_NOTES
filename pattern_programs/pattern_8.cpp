#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            std::cout<<' ';
        }
        for(int j=1;j<=2*i-1;j++)
        {
            std::cout<<'*';
        }
        for(int j=2*i;j<=2*n-1;j++)
        {
            std::cout<<' ';
        }

        std::cout<<'\n';
    }
        
}