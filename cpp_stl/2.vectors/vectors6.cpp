#include<iostream>

void explain_vectors()
{
    //Inserting values by using iterators.

    std::vector<int> v={23,45,67,90};

    //syntax v.insert(address,element);

    v.insert(v.begin()+1,100);

    //vector v after insertion {23,100,67,90}

    //inserting same values multiple times
    //syntax vector.insert(iterator,no.of.times,element);

    v.insert(v.begin()+2,2,50); // vector v {23,100,50,50,67,90}

    //copying the vectors

    std::vector<v> copy_vector(2,75);//a vector named copy_vector contains {50,50}

    v.insert(v.begin(),copy_vector.begin(),copy_vector.end());

    // vector v {75,75,23,100,50,50,67,90}

    v.pop_back();//pops the last element

    std::vector<int> v1={34,56};

    v1.swap(v); //swaps the vector v1 with v.

    v1.assign(2,25); //syntax vector.assign(size,value); {25,25}
    
    //if v1 is empty then assigns creates another vector of size 'size' with value 25.if already exists then it replaces with this vector.

    v1.max_size();//returns the maximum no.of elements that a container can hold(very large value).

    /* Time complexity->vectors behave like arrays */


}