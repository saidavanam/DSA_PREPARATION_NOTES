#include<iostream>
#include<vector>


void explain_vectors_as_arrays()
{
    std::vector testScore { 84, 92, 76, 81, 56 };
    std::size_t length { testScore.size() };
    /*if u use int instead of std::size_t,compiler throws an warning becuase data type of length is std::size_t.
    if u want to use int then use direct intialisation*/

    int average { 0 };
    for (std::size_t index{ 0 }; index < length; ++index) // index from 0 to length-1
        average += testScore[index];                      // add the value of element with index `index`
    average /= static_cast<int>(length);                  // calculate the average

    std::cout << "The class average is: " << average << '\n';

}