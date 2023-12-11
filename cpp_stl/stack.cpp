#include<iostream>
#include<stack>

void explain_stack() //last in first out
{
    std::stack<int> st;

    std::cout<<st.top(); //gives error.the reason is there are no elements present in stack

    st.push(1);//{1}
    st.push(2);//{1,2}
    st.emplace(3);//{1,2,3}

    std::cout<<st.top();//prints 3

    st.pop();

    //new st={1,2}

    std::cout<<st.empty()//prints false

    std::cout<<st.size()//prints 4

    std::stack<int> s1,s2;
    s1.swap(s2);//swaps s1 and s2.
}