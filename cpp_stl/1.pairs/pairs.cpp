#include<bits/stdc++.h> //contains all the libraries includes math and string.

using namespace std; //this is very imp here

void explain_pairs()
{
    //pair is a type under utility library and is used to store two values

    pair<int,int> p={1,3}; //datatype variable_name=value

    //actually it is std::pair<int,int>

    //accessing values
     cout<<p.first<<'\n'<<p.second;

     //pairs can be nested also(pair within a pair)

     pair<int,pair<int,int>> s={1,{2,3}};

     //accessing values 1->s.first
     //2->s.second.first and 3->s.second.second

     //array of pairs
     pair<int,int> arr[]={{1,3},{1,4},{1,5}}; // instatitation syntax of array

     std::cout<<arr[0].first;//1
}
