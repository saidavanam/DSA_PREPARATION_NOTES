#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int choice;
    std::cin>>choice;

    char s;

    for(int i=1;i<=choice;i++)
    {
         s=65+i-1;
        for(int j=1;j<=i;j++)
        {
            std::cout<<s;
        }
        std::cout<<'\n';
    }
}