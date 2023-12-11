#include<iostream>

int main(void)
{
    int n1;
    std::cout<<"Enter the number 1:";
    std::cin>>n1;

    int n2;
    std::cout<<"Enter the number 2:";
    std::cin>>n2;

    while(n1>0 && n2>0)
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }

    if(n1==0)
    {
        std::cout<<"GCD of two numbers is "<<n2<<'\n';
    }
    else
    {
        std::cout<<"GCD of two numbers is "<<n1<<'\n';
    }

    //time complexity is O(log(min(n1,n2)to the base phie))

    //read about mathematical proof of euclidean algorithm once.

}