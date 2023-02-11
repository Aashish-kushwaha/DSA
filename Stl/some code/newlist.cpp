#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1;
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        if(key & 1)
            l1.push_back(key);// if key is odd
        else
            l1.push_front(key);//if key is even
    }
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}