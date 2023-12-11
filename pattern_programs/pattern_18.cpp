#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int choice;
    std::cin>>choice;

    char ch;

    for(int i=1;i<=choice;i++)
    {
        ch=65+choice-i;
        for(int j=1;j<=i;j++)
        {
            std::cout<<ch<<' ';
            ch++;
        }
        std::cout<<'\n';
    }
}