#include<iostream>

int main(void)
{
    int n1;
    std::cout<<"Enter the number 1:";
    std::cin>>n1;

    int n2;
    std::cout<<"Enter the number 2:";
    std::cin>>n2;

    int min=n1<=n2?n1:n2;

    for(int i=min;i>0;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            std::cout<<"GCD of two numbers is "<<i<<'\n';
            break;
        }
    }

    


}