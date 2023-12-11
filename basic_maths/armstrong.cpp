#include<iostream>

int main(void)
{
    int num;
    std::cout<<"Enter the number";
    std::cin>>num;

    int sum=0;
    int num1=num;
    int num2=num;

    int count=0;

    while(num2!=0)
    {
        count++;
        num2/=10;
    }

    while(num!=0)
    {
        int product=1;
        for(int i=1;i<=count;i++)
        {
            product*=(num%10);
        }
        sum+=product;
        num/=10;
    }

    if(num1==sum)
    {
        std::cout<<true;
    }
    else{
        std::cout<<false;
    }
}