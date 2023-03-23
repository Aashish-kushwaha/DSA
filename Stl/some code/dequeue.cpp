// double-ended queue:we have option to insert or delete  either on start or last of the queue and is faster then vector
//for insertion and deletion,no contigious memory.random access
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    //initialize
    deque <int> dq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int key;
        cin>>key;
        dq.push_front(key);
    }
    // front element
    cout<<dq.front();
    cout<<endl;
    // last element
    cout<<dq.back();
    cout<<endl;

    //remove last element
    dq.pop_back();

    // remove first element
    dq.pop_front();

    //for loop
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // for each loop
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // size of deque
    cout<<dq.size();

    // if deque is empty
    if(dq.empty())
    {
        cout<<"empty";
    }else
    {
        cout<<"not empty";
    }
    cout<<endl;

    // access element
    cout<<dq.at(2);


    // insert element
    dq.insert(dq.begin(),34);

    cout<<dq.front();

    

}

  