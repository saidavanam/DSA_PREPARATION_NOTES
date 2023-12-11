#include<list>

void explain_lists()
{
    /*The difference between lists and vectors lies in memory allocation.
     Vectors are typically implemented as contiguous arrays, which means that they allocate a single block of memory for all their elements.
     On the other hand, Lists are typically implemented as linked lists, which means that they allocate individual memory blocks for each element.*/

     // so no indexing is possible in lists unlike in python.

     std::list<int> ls={50,50};

     //even front operations also works here in lists.insertion at front in vector is possible through insert function but it is very costlier.

     ls.push_front(70);
     ls.emplace_front(80);

     //list ls {80,70,50,50}

     ls.push_back(75);
     ls.emplace_back(86);

     //list ls {80,70,50,50,75,86}

     //Time complexity is same as linked list

     /*
         insertion at front is O(1). insertion at end is O(n).same for deletion.
         searching an element is O(n)
     */





}
