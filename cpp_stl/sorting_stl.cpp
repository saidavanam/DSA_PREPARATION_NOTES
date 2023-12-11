#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

//or else use #include<bits/stdc++.h>

bool comp(std::pair<int> p1,std::pair<int> p2)
{
    if(p1.second<p2.second)
    {
        return true;
    }
    if(p1.second>p2.second)
    {
        return false;
    }

    //if p1.second==p2.second

    if(p1.first>p2.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void explain_sorting()
{
    std::vector<int> v={4,2,5,6,3};

    int maximum=max_element(v,v+5); //returns max element in v

    sort(v,v+5);//sort(start,end) [start,end)

    //now v is{2,3,4,5,6}

    sort(v,v+5,std::greater<int>); //sorts in descending order

    /*sort also contains 4th parameter which is a function.
      It is a optional argument which can be used if we want to sort elements in particular order.
      THE FUNCTION SHOULD BE A BOOLEAN.
    */
    
    std::pair<int,int> a[]={{1,2},{2,1},{4,1}};

    /*
       sort elements according to second element
       If second element is same,then sort according to first element in descending.
    */

   sort(a,a+3,comp); //sorts according to comp.If comp returns false then pairs will be swapped or else remains same.
}

void misc()
{
    std::string s="123";
    do
    {
        std::cout<<s<<'\n';
    } while (next_permutation(s.begin(),s.end()));

    /*
      output:-
      123
      132
      213
      231
      312
      321

      MAKE SURE STRING IS SORTED IN ASCENDING ORDER TO GET ALL THE POSSIBILITES   
     */
}


