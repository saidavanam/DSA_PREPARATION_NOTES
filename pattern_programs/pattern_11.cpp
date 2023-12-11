#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<(i+j+1)%2<<' ';
        }
        std::cout<<'\n';
    }
}