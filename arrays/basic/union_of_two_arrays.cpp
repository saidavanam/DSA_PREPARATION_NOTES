//Union of two sorted arrays

#include<iostream>
#include<set>
#include<vector>
using namespace std;

/*
  Brute force approach by using sets.
*/

vector<int> brute_solution(int*a1,int n1,int*a2,int n2)
{
    set <int> st;
    
    for(int i=0;i<n1;i++)
    {
        st.insert(a1[i]);
    }
    
    for(int i=0;i<n2;i++)
    {
        st.insert(a2[i]);
    }
    
    vector <int> union_set;
    
    for(auto it:st)
    {
        union_set.push_back(it);
    }
    
    return union_set;
    
}

/*
    Time complexity of brute approach is o(n1logn1)+o(n2logn2)+o(n1+n2)
*/




/*
Optimal solution using two pointer method

    i iterate over array a1
    j iterate over array a2

    if(a1[i]<a2[j]) then add a1[i] to final array and increment i
    else add a2[j] to final array and increment j
    repeats until any of i OR j cross the bounds

    add remaining elements in i or j to final array.(requires to add elements when any one cross the bounds early and other one doesn't )

*/

vector<int> optimal_solution(int*a1,int n1,int*a2,int n2)
{
    vector <int> union_set;
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            if(k==0)
            {
                union_set.push_back(a1[i]);
                k++;
            }
            else
            {
                if(a1[i]!=union_set[k-1])
                {
                    union_set.push_back(a1[i]);
                    k++;

                }
            }
            i++;
        }
        else if(a2[j]<=a1[i])
        {
            if(k==0)
            {
                union_set.push_back(a2[j]);
                k++;
            }
            else
            {
                if(a2[j]!=union_set[k-1])
                {
                    union_set.push_back(a2[j]);
                    k++;
                }
            }
            j++;
        }

        
    }

    while(i<n1)
    {
         if(k==0)
            {
                union_set.push_back(a1[i]);
                k++;
            }
            else
            {
                if(a1[i]!=union_set[k-1])
                {
                    union_set.push_back(a1[i]);
                    k++;

                }
            }
            i++;
    }

    while(j<n2)
    {
           if(k==0)
            {
                union_set.push_back(a2[j]);
                k++;
            }
            else
            {
                if(a2[j]!=union_set[k-1])
                {
                    union_set.push_back(a2[j]);
                    k++;
                }
            }
            j++;
    }
    return union_set;
}
/*
   Time and space complexity of this approach is o(n1+n2)
*/