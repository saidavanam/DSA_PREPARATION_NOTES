#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int choice;
    std::cin>>choice;

    for(int i=0;i<choice;i++)
    {
        for(int j=0;j<choice;j++)
        {
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
}