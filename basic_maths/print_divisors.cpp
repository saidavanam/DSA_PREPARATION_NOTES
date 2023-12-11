#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

int main(void)
{
    int n;
    std::cout<<"Enter the number";
    std::cin>>n;

    std::vector<int> num;

    for(int i=1;i*i<=n;i++) //o(sqrt(n))
    {
        if(n%i==0)
        {
            num.push_back(i);
            if(i!=n/i)
            {
                num.push_back(n/i);
            }
        }
       
    }

    sort(num.begin(),num.end());//o(nlogn)

    for(auto it:num)//o(n)
    {
        std::cout<<it<<'\n';
    }
}