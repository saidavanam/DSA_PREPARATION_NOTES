#include<iostream>
#include<bits/stdc++.h> 


void explain_stack_behaviour()
{
    //stack-LIFO

    //REVISE VECTORS-3 NOTES.Incomplete topics are discussed here.

    std::vector<int> stack;

    stack.push_back(1);
    stack.push_back(2);
    stack.push_back(3);

    std::cout<<stack.back();//returns value at the top of the stack.returns 3.

    //push_back and emplace_back reallocates memory if sufficient memory is not available for resizing which is computationally expensive.

    /*
        It is good to create extra memory at begining but there is a problem here.check out the below snippet of code.
    */

   std::vector<int> stack1(3);

   stack1.push_back(1);
   stack1.push_back(2);

   /*
     output when u try to print elements
     0 0 0 1 2 (zeros are printed here)

     The output is not we expected(1 2)
     
     we can get rid of it by using reserve function 
   */

    std::vector<int> stack2.reserve(3); //reserves the memory only.changes the capacity not length.

    stack2.push_back(1);
    stack2.push_back(2);
    stack2.push_back(3);

    for(int ele:stack2)
    {
        std::cout<<ele<<'\n';
    }

    /*
      output:-
        1 2 3
    */

    //push_back vs emplace_back

     /*The difference between push_back and emplace_back is that push_back creates a temporary object and then copies to end of vector and then destroys that object.
    where as emplace back simply appends the object at the end of vector.so emplace_back is faster than push_back.*/

    std::vector<std::pair<int,int>> stack{};

	// When we already have an object, push_back and emplace_back are the same
	std::pair<int,int> f{ "a", 2 };
	stack.push_back(f);
	stack.emplace_back(f);

	// When we need to create a temporary object to push, emplace_back is more efficient
	stack.push_back({ "a", 2 }); // creates a temporary object, and then copies it into the vector
    stack.emplace_back("a", 2);  // forwards the arguments so the object can be created directly in the vector (no copy made)




    





}