#include<iostream>

int factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*factorial(num-1);
}

int main(void)
{
    int a;
    std::cout<<"enter the number";
    std::cin>>a;

    std::cout<<"The factorial of n numbers is "<<factorial(a)<<'\n';

}