#include<bits/stdc++.h>

void deletion_vectors()
{
    //syntax:- vector.erase(iterator);

    std::vector<int> v={10,20,30,40};

    v.erase(v.begin()+1);

    //vector v after deletion {10,30,40};

    //deleting multiple elements

    //syntax vector.erase(start_iterator,end_iterator); [start,end)

    std::vector<int> v1={25,40,60,90,120,160};

    v1.erase(v.begin()+1,v.begin()+3);

    //vector after deletion v1 {25,90,120,160} do note that 90 is not deleted.

    v1.clear();//empties entire vector.

    std::cout<<v.empty();//returns true if vector is empty otherwise false.


}