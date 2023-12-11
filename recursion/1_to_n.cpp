#include<iostream>

void print_num(int num)
{
    if(num==0)
    {
        return;
    }
    print_num(num-1);
    std::cout<<num<<'\n';
}

int main(void)
{
    int a;
    std::cout<<"enter the number";
    std::cin>>a;

    print_num(a);

}