// dubly ended queue:we have option to insertor delete  either on start or last of the queue and is faster then vector
//for insertion and deletion,no contigious memory
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> dq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int key;
        cin>>key;
        dq.push_front(key);
    }
    cout<<dq.front();
    cout<<endl;
    
    dq.pop_back();
    dq.pop_front();
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<dq.size();
    if(dq.empty())
    {
        cout<<"empty";
    }else
    {
        cout<<"not empty";
    }
    cout<<endl;
    cout<<dq.at(3);

}

  