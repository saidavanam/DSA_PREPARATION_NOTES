#include<bits/stdc++.h>

//ITERATORS.

void explain_iterators()
{
    std::vector<int> v={2,3,4,5};


    //iterators are objects contained in a vector which stores address of a location of vector element.

    std::vector<int>::iterator it=v.begin(); //stores address of the starting element of vector.

    std::vector<int>::iterator it2=v.end(); //stores address of the NEXT to the end element.

    /*
           {2,3,4,5}
            ^       ^->v.end()
            v.begin()    */

    std::cout<<*(it);//printing address.(same as c) u can use pointer arthemetic opeartions.

    std::vector<int> v1={1,4,5,9};

    std::vector<int>::iterator it3=v1.rend();

    std::vector<int>::iterator it4=v1.rbegin();

    /*
          rend and rbegin->here iteration done in REVERSE ORDER where rend stores the address BEFORE the first element and rbegin stores 
          the address of last element.
          NOTE:-vector will not be reversed just iteration happens in reverse order.

          {1,4,5,9}
         ^       ^(v.rbegin()) 
         (v1.rend)

             <-- (direction of iteration)
         *(it4++)=5
         *(it3--)=1
    */

     std::cout<<v.back();//returns element at last position.

     for(std::vector<int>::iterator it=v.begin();it!=v.end();it++)
     {
        std::cout<<*(it)<<' ';
     }

     //or

     for(auto it=v.begin();it!=v.end();it++) //auto takes care of assigning type to a variable.
     {
        std::cout<<*(it)<<' ';
     } 

     //or

     for(auto it:v) //shorter syntax
     {
        std::cout<<*(it)<<' ';
     }

}