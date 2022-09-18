// priority queue is same as binary heap
//Binary heap is a binary tree with the following properties
//-->>it is complete binary tree and this property of Binary heap makes it suitable to be stored in a array.
//            -->>Max Heap:the jey at the root must be maximum among all keys present in binary heap.
//            |
//Binary tree--
//            |
//             -->>Min Heap:the key at root must be minimum among all keys present in binary heap
// priority queue is udsed to set priority among element
#include<iostream>
#include<queue>// header file is queue itslef
using namespace std;
int main()
{
    priority_queue <int> pq;
    pq.push(10);        //------
    pq.push(2);         //      |
    pq.push(20);        //      |-->> by default this is "MAX" heap this can be proved by printing top element which will be max among all that is 30
    pq.push(15);        //      |
    pq.push(30);        //------

    cout<<pq.top()<<endl;
    //MIN heap
    priority_queue <int, vector<int>, greater<int> > pq1,pq2;// declaring min heap
    pq1.push(10);
    pq1.push(2);
    pq1.push(20);
    pq1.push(15);
    pq1.push(30);

    cout<<pq1.top()<<endl;

    cout<<pq.size()<<endl; // size of heap
    if(pq.empty())
    {
        cout<<"pq is empty\n";
    }else
    {
        cout<<"pq is not empty\n";
    }
     pq1.swap(pq2);
     cout<<pq.top()<<endl;
    cout<<pq1.top()<<endl;
}