#include<iostream>

#include <bits/stdc++.h>

//Problem statement:-Finding longest sequence in an array

/* Brute force:-Pick starting element and find its x+1 element.if found increase counter by 1 or else go to next element.Do this for all elements

//time complexity is in order of O(n^2)
*/

int linear_search(std::vector<int> &v,int k)
{
    for(int j=0;j<v.size();j++)
    {
        if(k==v[j])
        {
            return 1;
        }
    }
    return 0;
}

int least_optimal(std::vector<int> &v)
{
    int max=1;
    int n=v.size();
    int longest=0;

    for(int i=0;i<n;i++)
    {
        longest=1;
        int j=1;
        while(i<n && (linear_search(v,v[i]+j)==1))
        {
            longest++;
            j++;
        }
        if(longest>max)
        {
            max=longest;
        }
    }

    return max;
}

/*
  Better approach :-

  Ex:- [100,102,100,101,101,4,3,2,3,2,1,1,1,2] 

  1)sort the elements first
    [1,1,1,2,2,2,3,3,4,100,101,101,102]

  2)int last_smaller=INT_MIN,count=0,max=0

  3)conditions:-
      ->if current_value remains same last smaller,reject it and go to next iteration
      ->if current_value-1 equals to last_smaller then increase count+1,last_smaller=current_value
      ->current_value-1 not equals last_smaller then reset count to 0 then update max and make last_smaller=current_value 

   time complexity is o(nlogn)+o(n)
*/

int better(std::vector<int> v)
{
    sort(v.begin(),v.end());
    int n=v.size();

    int last_smaller=v[0];
    int max=1;
    int count=1;

    for(int i=1;i<n;i++)
    {
        if(v[i]==last_smaller)
        {
            continue;
        }
        else if(v[i]-1==last_smaller)
        {
            count++;
            last_smaller=v[i];
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=1;
            last_smaller=v[i];

        }
    }

    return max;
}

/*
  Optimal approach:- Using unordered set data structure

  ->The problem with better approach is we are disortiting the elements.Optimal approach gives the way of finding max without distorting the input.

   we use set data structure to store inputs
   count=0,max=0

   procedure:-
   1)Iterate using for loop,for every element v[i] look whether v[i]-1 exists or not
   2)If exists,then go to next element.
   3)if not exists then keep that as starting v[i] element and look for v[i]+1 and if v[i]+1 exists then increase count by 1 and do it until v[i]+1 is not found.
   4)update max if count>max

   time complexity(assume searching in unordered map takes O(1))
   o(n)->insertion of elements to set
   searching ->almost o(2n)

   so time complexity is order of O(3n) 

*/

int optimal(std::vector<int>v)
{
    std::unordered_set<int>s;
    int count=0,max=0;

    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        if(s.find(v[i]-1)==s.end())
        {
            count=1;
            int j=1;
            while(s.find(v[i]+j)!=s.end())
            {
                count++;
                j++;
            }
            if(count>max)
            {
                max=count;
            }

        }
    }
    return max;
}

int main(void)
{
    std::vector<int> v{100,102,101,101,4,3,2,3,2,1,1,1,2};

    int max=optimal(v);
    std::cout<<max<<'\n';
}




