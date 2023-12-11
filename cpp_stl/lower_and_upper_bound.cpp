#include<iostream>
#include<vector>    
    
void explain_bounds()
{
    //upper bound and lower bound functions

    //lower bound returns the iterator of given element in vector.

    std::vector<int> v={1,2,3,4,5,8};

    //syntax of lower_bound(start_iterator,end_iterator,key)

    int index1=lower_bound(v.begin(),v.end(),5)-v.begin();  //returns 4

    //If element is not found,lower_bound returns iterator of next greater element or else returns v.end() address.

    int index2=lower_bound(v.begin(),v.end(),7)-v.begin();//returns 5(next greater index)

    int index2=lower_bound(v.begin(),v.end(),0)-v.begin();//RETURNS 0

    //Remember lower_bound and upper_bound uses binary search to find values so make sure you use these functions in sorted data structures only.
    
    //***since we have to find 0 which is lesser then v.begin() it returns 0.(Beaware of this error)(so dont use lower_bound in these cases)

    //UPPER_BOUND

    //ALWAYS RETURNS THE ITERATOR OF NEXT GREATER ELEMENT IRRESPECTIVE WHETHER ELEMENT FOUND OR NOT FOUND

    int index3=upper_bound(v.begin(),v.end(),3); //Returns 4(next greater index of 3).

    int index4=upper_bound(v.begin(),v.end(),10); //returns 6(v.end()-v.begin())
}    