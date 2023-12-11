#include<bits/stdc++.h> //contains all the libraries includes math and string.

void explain_vectors()
{
    //vectors are dynamic unlike arrays.

    // You can insert elements dynamically using push_back and emplace_back. BOTH FUNCTIONS TAKES ONLY ONE ARGUMENT.

    std::vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    //vector of pairs

    std::vector<std::pair<int,int>> vec;

    vec.push_back({1,2});//curly braces are necessary.

    vec.emplace_back(3,4);//there is no need of curly braces.emplace_back automatically assumes it is a pair.

    std::vector<int> v1(5);

    v1.push_back(1);//pushing one more element at the end of vector.u can use emplace back.




   


}