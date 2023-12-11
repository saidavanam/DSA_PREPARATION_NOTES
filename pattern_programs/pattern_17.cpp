#include<iostream>

int main(void)
{
    std::cout<<"enter the no. of rows";
    int n;
    std::cin>>n;

    int k,k1;
    char s;

    for(int i=0;i<n;i++)
    {
        k=0;
        for(int j=0;j<2*n+1;j++)
        {
            if(j>=(n-i) && j<=(n+i))
            {
                if(k<i+1)
                {
                    s=65+k;
                    std::cout<<s;
                    k++; 
                    if(k==i+1)
                    {
                        k1=k-1;
                    }
                }
                else
                {
                    k1--;
                    s=65+k1;
                    std::cout<<s;

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