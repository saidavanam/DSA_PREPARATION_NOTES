#include<deque>

void explain_deque()//deque stands for double ended queue.
{
    /*Here insertion and deletion at back and front takes constant time.
    searching element also takes constant time.
    inserting element at any position except front and back takes O(n).*/

    //***** All LIST and VECTOR Functions are applicable here.

    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);

    //{15,20,10,30}
}