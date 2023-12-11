#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(i==1||j==i||j==(2*n-1)-(i-1))
            {
                std::cout<<'*';
            }
            else{
                std::cout<<' ';
            }
            std::cout<<' ';
        }
        std::cout<<'\n';
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(i==1||j==i||j==(2*n-1)-(i-1))
            {
                std::cout<<'*';
            }
            else{
                std::cout<<' ';
            }
            std::cout<<' ';
        }
        std::cout<<'\n';
    }
}