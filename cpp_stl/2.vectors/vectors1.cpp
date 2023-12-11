#include<vector>


void explain_vectors()
{
    //vectors contains in #include<vector>

    std::vector<int> primes={2,3,5,7};//list intialisation

    int index;

    primes[index];//accessing values

    //or

    primes.at(index);

    /*
    The difference between using [index] and at(index) is that using [] doesnt show error for going out of bounds.
    But using at(index) throws exception for unbound checking.
    */
    

    //constructing vector of specific length.

    std::vector<int> data(10);//vector of 10 ints where all are intialised to zero.This is called direct intialisation.

    //std::vector<int>data(10) is different from std::vector<int>data{10} (veryimp)

    //std::vector<int> data=10 (compilation error)

    std::vector data{10};//this is correct

    //u can use type qualifier in data types like const

    std::vector<const int> numbers={1,2,3,4,5};//cannot be changed anywhere in the program



    
}

//be careful while dealing with structs

/*

struct Foo
{
    std::vector<int> v1(8); // compile error: direct initialization not allowed for member default initializers***
};

*/

//always remember that direct intialisation is not allowed for data members in structs and classes,instead use list intialisers.

//correct way of dealing
struct foo
{
    std::vector<int> v1{std::vector<int>(8)}; //very imp syntax
};
