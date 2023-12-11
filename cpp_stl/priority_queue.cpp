#include<iostream>
#include<bits/stdc++.h>

void explain_priority_queue()
{
    //max element stays at the top->max heap

    std::priority_queue<int> qp;

    qp.push(3);//{3}
    qp.push(4);//{4,3}
    qp.push(2);//{4,2,3}
    qp.emplace(10);//{10,4,2,3}

    qp.top();//returns element 10

    qp.pop();//returns element 10

    //new pq={4,2,3}

    std::cout<<qp.top(); //returns element 4

    //size,empty and swap are same as others

    //priority queue can be min heap

    std::priority_queue<int,std::vector<int>,std::greater<int>> pq1; //syntax for implementing min heap/min priority

    
    qp.push(3);//{3}
    qp.push(4);//{3,4}
    qp.push(2);//{2,3,4}
    qp.emplace(10);//{2,3,4,10}

    qp.top();//returns element 2

    /*
       Time complexity:-
       push-O(logn)
       top-O(1)
       pop-O(logn)[popping any element]
    */






}