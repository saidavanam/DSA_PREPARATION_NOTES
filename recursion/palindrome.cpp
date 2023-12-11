#include<iostream>

//leetcode problem no.125(valid palindrome)

int main(void)
{
    std::string s{};
    std::getline(std::cin,s);

    int length=s.length();
    int i=0,p=0;
        
        while(i<length)
        {
           if(s[i]>=65 && s[i]<=90)
           {
               s[i]+=32;
               s[p]=s[i];
               i++;
               p++;
           }
           else if((s[i]>=97 && s[i]<=122)|| (s[i]>='0' && s[i]<='9'))
           {
               s[p]=s[i];
               i++;
               p++;
           }
           else
           {
               while(!((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) ))
               {
                   i++;
               }
           }
        }

        for(int z=0;z<p;z++)
        {
            std::cout<<s[z];
        }

        std::cout<<'\n';


        for(int z=0;z<p/2;z++)
        {
            if(s[z]!=s[p-z-1])
            {
                std::cout<<"Not palindrome"<<'\n';
                return 1;
            }
        }
        std::cout<<"palindrome"<<'\n';
        return 0;
        
    }


    