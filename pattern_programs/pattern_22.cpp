#include<iostream>

int min(int a,int b);
int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    int top,bottom,left,right;

    int p=2*n-1;

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p;j++)
        {
            top=i;
            left=j;
            right=2*n-2-j;
            bottom=2*n-2-i;

            std::cout<<n-min(min(top,bottom),min(left,right));
            
        }
        std::cout<<'\n';
    }
}

int min(int a,int b)
{
    return a<=b?a:b;
}