#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int choice;
    std::cin>>choice;

    char s;

    for(int i=choice;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            s=65+j-1;
            std::cout<<s;
        }
        std::cout<<'\n';
    }
}