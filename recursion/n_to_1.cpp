#include<iostream>

void print_num(int num)
{
    if(num==0)
    {
        return;
    }
    std::cout<<num<<'\n';
    print_num(num-1);
}

int main(void)
{
    int a;
    std::cout<<"enter the number";
    std::cin>>a;

    print_num(a);

}