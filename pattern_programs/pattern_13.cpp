#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            sum+=1;
            std::cout<<sum<<' ';
        }
        std::cout<<'\n';
    }
}