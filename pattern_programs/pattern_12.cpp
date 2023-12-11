#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    int p=2*n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=p;j++)
        {
            if(j<=i || j>p-i)
            {
                if(j<=i)
                {
                    std::cout<<j;
                }
                else
                {
                    std::cout<<p-j+1;
                }
            }
            else
            {
                std::cout<<' ';
            }
        }

        std::cout<<'\n';
    }
}