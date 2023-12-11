#include<iostream>
#include<vector>

using namespace std;

/*
   Remember repetiton is allowed if and only if same element repeated same no.of times.

   Optimal approach is by using two pointer method.

   i iterates over a1,j iterates over a2

   if(a1[i]==a2[j]) then increment both i and j
   else increment variable of array which has smaller value
   repeat until any one of variable reach their bounds
*/

vector<int> intersection(int*a1,int n1,int*a2,int n2)
{
    int i=0,j=0;

    vector<int> intersection_set;

    while(i<n1 && j<n2)
    {
        if(a1[i]==a2[j])
        {
            intersection_set.push_back(a1[i]);
            j++;
            i++;
        }
        else if(a1[i]<a2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return intersection_set;
}



int main(void)
{
    int n1;
    std::cout<<"Enter the no.of elements for 1st array:"<<'\n';
    std::cin>>n1;
    
    int a1[n1];
    
    std::cout<<"Enter the elements in a1 array:";
    
    for(int i=0;i<n1;i++)
    {
        std::cin>>a1[i];
    }
    
    int n2;
    std::cout<<"Enter the no.of elements for 2nd array"<<'\n';
    std::cin>>n2;
    
    int a2[n2];
     std::cout<<"Enter the elements in a2 array:";
    
    for(int i=0;i<n2;i++)
    {
        std::cin>>a2[i];
    }
    
   vector<int> intersection_set=intersection(a1,n1,a2,n2);

   std::cout<<"\n\n"<<intersection_set.size()<<"\n\n";
   
    for(auto it:intersection_set)
    {
       std::cout<<it<<'\n';
    }
   
    
}

/*
 U can use this main code for union also
/*

/*
  Time complexity of this approach is O(n1+n2)
*/