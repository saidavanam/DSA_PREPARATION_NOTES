#include<vector>


void explain_vectors()
{
    std::vector<int> name(10);//size has to be positive or else leads to undefined behaviour.

    //finding length of vector. remember there is no member function called 'length' in vector but size is present.

    int length=name.size();//equivalent to std::size_t. Gives no. of elements in a vector.

    //std::size_t is almost same as unsigned int but only difference is that unsigned int is 32bit but std::size_t is 64bit. 
    
    int size,ele;

    size=5;
    ele=100;

    std::vector<int> v(size,ele);// vector of 'size' size where each element contains 'ele'.(here vector contains 5 elements where each element equals 100).

    //read elements
    


}
