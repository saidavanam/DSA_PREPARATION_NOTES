#include<iostream>
#include<vector>

void resizing_at_runtime()
{
   std::vector v{ 0, 1, 2 }; // create vector with 3 elements
    std::cout << "The length is: " << v.size() << '\n';//output-3

    v.resize(5);              // resize to 5 elements
    std::cout << "The length is: " << v.size() << '\n'; //output-5

    /*
       CAPACITY OF A VECTOR:-
       A std::vector with a capacity of 5 has allocated space for 5 elements. 
       If the vector contains 2 elements in active use, the length (size) of the vector is 2. The 3 remaining elements have memory allocated for them, but they are not considered to be in active use. 
       They can be used later without overflowing the vector.


       The length of a vector is how many elements are “in use”.
       The capacity of a vector is how many elements have been allocated in memory.

       most of the times values of capacity and length will be same.The difference u will notice while using resize() function.

    */

    std::vector v{ 0, 1, 2, 3, 4 };
    v = { 0, 1, 2, 3, 4 }; // okay, array length = 5
    std::cout << "Capacity: " << v.capacity() << "  Length: " << v.size() << '\n';

    for (auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';

    // Resize vector to 3 elements
    v.resize(3); // we could also assign a list of 3 elements here
    std::cout << "Capacity: " << v.capacity() << "  Length: " << v.size() << '\n';

    for (auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';

    /*
      Capacity: 5  Length: 5
      0 1 2 3 4 
      Capacity: 5  Length: 3
      0 1 2 

      //array indexing is based on length not by capacity.
    */

    /*
    sometimes using resize is computationally expensive. Beacuse if sufficient memory is not available for resizing,
    then std:vector allocates new space in the memory where intial elements are copied to that memory
    */

     /*whenever we are using huge chunks of memory,we may leave so much memory without reclaiming to OS.
       In this case,we can use function called shrink_to_fit() that requests that the vector shrink its capacity to match its length.
     */

    std::vector<int> v(1000); // allocate room for 1000 elements
	std::cout << "Capacity: " << v.capacity() << "  Length: " << v.size() << '\n';

	v.resize(0); // resize to 0 elements
	std::cout << "Capacity: " << v.capacity() << "  Length: " << v.size() << '\n';

	v.shrink_to_fit();//****
	std::cout << "Capacity: " << v.capacity() << "  Length: " << v.size() << '\n';

    /*
        Capacity: 1000  Length: 1000
        Capacity: 1000  Length: 0
        Capacity: 0  Length: 0
    */


}