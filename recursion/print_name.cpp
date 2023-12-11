#include<iostream>

void print_name(int n)
{
    if(n==0)
    {
        return;
    }
    print_name(n-1);
    std::cout<<"sri sai subramanyam"<<'\n';

}

int main(void)
{
    int a;
    std::cout<<"enter the number of times";
    std::cin>>a;

    print_name(5);
}