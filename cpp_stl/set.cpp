#include<iostream>
#include <bits/stdc++.h>

void explain_sets() //set is a data structure where elements are sorted and all elements are unique.set is a non-linear data structure.
{
    std::set<int> st;

    st.insert(2); //{2}
    st.emplace(5); //{2,5}
    st.insert(5); //{2,5}[elements are unique]
    st.emplace(7); //{2,5,7}
    st.insert(8); //{2,5,7,8}
    st.insert(7); //{2,5,7,8}

    auto it=st.find(7); //returns address of element in set st

    auto it2=st.find(50);//element not found so find returns st.end() address.

    st.erase(5);//erases 5 in st.{2,7,8}(sorted order remains same).Takes logarithmic time

    st.erase(it);//erase accepts iterators or values as arguments.{2,8}

    int count=st.count(2);//if exists returns 1 or else 0.more than 1 is not possible as set is unique data structure.

    std::set<int> st2;

    st2.insert(1);
    st2.emplace(2);
    st2.insert(3);
    st2.emplace(4);
    st2.insert(5);
    st2.insert(6);

    //st2 contains{1,2,3,4,5,6}

    auto ite1=st2.find(2);
    auto ite2=st2.find(4);

    st2.erase(ite1,ite2); //erases [*ite1,ite2)

    //All functions in set takes logarithmic time.

    //st2={1,4,5,6}

    //All functions which are used in vector is applicable here also.

    //using lower_bound and upper_bound.(once revise notes in cpp_stl folder)

    auto it=st2.lower_bound(4);//returns iterator of 2nd element

    auto it=st2.upper_bound(5);//returns iterator of next greater element of 5.(returns iterator of element 6)
}

void explain_multiset()
{
    //All elements are stored in sorted but stores duplicate elements also
    
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);//{1,1,1,2,2,3}
    
    ms.erase(1);//erases all 1's in multiset
    
    //{2,2,3}
    
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    
    //{1,1,1,2,2,3}
    
    ms.erase(ms.find(1));//only single 1 erased
    //{1,1,2,2,3}
    
    
    ms.insert(1);
    
    ms.erase(ms.find(1),ns.find(1)+2);//erases two 1's here
    //{1,2,2,3}
    
    //rest all functions are same
       
}

void explain_unordered_set()
{
    //unsorted and unique
    std::unordered_set<int> st;
    
    //since unsorted:lower and upper bound functions wont work here
    //All functions has better complexity here
    
    /* ALL OPERATIONS ON THE UNORDERED_SET TAKE CONSTANT TIME O(1) on an average which can go up to linear time O(n) in the worst case which depends on the internally used HASH FUNCTION,
    but practically they perform very well and generally provide a constant time lookup operation */
   
}
