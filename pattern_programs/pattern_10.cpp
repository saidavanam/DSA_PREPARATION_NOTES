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
            std::cout<<'*';
        }
        std::cout<<'\n';
    }

      for(int i=choice-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
}