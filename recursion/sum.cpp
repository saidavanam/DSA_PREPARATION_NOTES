#include<iostream>

int print_sum(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num+print_sum(num-1);
}

int main(void)
{
    int a;
    std::cout<<"enter the number";
    std::cin>>a;

    std::cout<<"The sum of n numbers is "<<print_sum(a)<<'\n';

}