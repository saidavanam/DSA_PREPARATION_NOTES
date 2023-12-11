#include<iostream>
#include<queue>

void explain_queue() //first in first out
{
    std::queue<int> q;

    q.push(2);
    q.push(3);
    q.push(3);
    q.emplace(4);//{2,3,3,4}

    q.back()+=5;

    //new q={2,3,3,9}

    q.pop();

    //new q={3,3,9}

    std::cout<<q.front();//prints 3

    //remaining size,swap and empty functions same as stack
}    