#include <iostream>
#include <vector>

void change_vector(std::vector<int> v)
{
    v.push_back(10);
}


int main()
{
    std::vector<int> v={2,5,8,9};

    /*VECTORS FOLLOW PASS BY VALUE.
    instead of actual object,function callers takes copy of the object which will be expensive in terms of memory.
    so always send its address instead of actual object */

    change_vector(v);

    std::cout<<v.size()<<'\n'; //returns value 4
   
}