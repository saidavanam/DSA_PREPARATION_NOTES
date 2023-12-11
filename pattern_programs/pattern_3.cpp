#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int choice;
    std::cin>>choice;

    for(int i=1;i<=choice;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout<<j;
        }
        std::cout<<'\n';
    }
}