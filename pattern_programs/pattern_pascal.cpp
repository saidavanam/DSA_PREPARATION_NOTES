#include<iostream>

int fact(int n);

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            std::cout<<' ';
        }
        int c=1;

        for(int k=1;k<=i;k++)
        {
            std::cout<<c<<' ';
            c=c*(i-k)/k;
        }
        std::cout<<'\n';
        
    }
}