#include<iostream>
#include<vector>

void for_range_loops()
{
    /*
       syntax:-

       for (element_declaration : array_object)
       {
          statement;
       }
    */

     std::vector fibonacci { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    for (int num : fibonacci) // iterate over array fibonacci and copy each value into `num`
       std::cout << num << ' '; // print the current value of `num`

    //note that num is value in fibonacci vector rather not index
    
    //To traverse elements in reverse order,we cant use this method directly instead reverse the elements in vector and traverse the elements.
}