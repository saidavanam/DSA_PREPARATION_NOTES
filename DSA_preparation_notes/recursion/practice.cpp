#include<iostream>

void triangle(int r,int c,int l)
{
    if(c==0)
    {
        return;
    }
    std::cout<<'*';
    triangle(r,c-1,l);
    if(c==r && r<l)
    {
        std::cout<<'\n';
        triangle(r+1,r+1,l);   
    }

}

int main(void)
{
    int length=4;
    triangle(1,1,length);
}