#include<iostream>

int main(void)
{
    int a;
    std::cout<<"enter the number";
    std::cin>>a;

    int count=0;

   do
   {
       count+=1;
        a=a/10;
   } while(a>0);
   
     std::cout<<count<<'\n';
}

//time complexity is ln(N)(not log(n))