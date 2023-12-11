#include <iostream>
#include <vector>

template <typename T>
void printReverse_1(const std::vector<T>& arr)
{
    for (std::size_t index{ arr.size() - 1 }; index >= 0; --index) // index is unsigned
    {
        std::cout << arr[index] << ' ';
    }

    std::cout << '\n';
}

void printReverse_2(const std::vector<T>& arr)
{
    for (int index =arr.size() - 1; index >= 0; --index) //using direct intialisation as it ignores narrow conversions.
    {
        std::cout << arr[index] << ' ';
    }

    std::cout << '\n';

}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printReverse_1(arr);//loops executes infintely as std::size_t never becomes negative.

    printReverse_2(arr);//This is the right of way executing elements in reverse order.USE LOOPS IN THIS WAY ONLY.

    return 0;
}