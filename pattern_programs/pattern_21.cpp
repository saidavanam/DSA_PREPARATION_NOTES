#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
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