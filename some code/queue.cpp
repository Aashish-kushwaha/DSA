// queue is also a ADT and follows FIFO
#include<iostream>
#include<queue>
using namespace std;
void printqueue(queue <int> qu)
{
    while(!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
}
int main()
{
    queue <int> qu;

    // push-> enqueues an element in the queue
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    
    // front->returns the value at the front of queue
    cout<<qu.front()<<endl;
    qu.pop();
    cout<<qu.front()<<endl;
    cout<<qu.size();
    printqueue(qu);
      

}