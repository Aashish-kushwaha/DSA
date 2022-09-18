//-->>pair is used to combine two values that may be different in type.
//-->>pair provided a way to store two heterogenous objects as a single unit.
//-->>it is basically used if we want to store tuples.
//it is defined in <utility> header  file
#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main()
{
    pair <int, int> p;// pair can be made of any type both elements can be of same data type or different or like <int,int>,<int,char>,<char,double>,<int,pair<int,int> >
    p=make_pair(5,3);// make_pair is used to insert value it is a genric function
    cout<<p.first<<endl;// pairname.first is used to access first element
    cout<<p.second<<endl;// pairname.second is used to access the second element
    //  we can make prorty queue of pair
    priority_queue<pair<int,int> > pq;
    pq.push(make_pair(30,20));
    pq.push(make_pair(20,30));
    pq.push(make_pair(10,30));
    pq.push(make_pair(5,30));
  //we know that priority queue behave as binary heap and by default it is a max heap so our 
    cout<<pq.top().first<<endl;
    pq.pop();
    cout<<pq.top().first<<endl;
     pq.pop();
    cout<<pq.top().first<<endl;
}