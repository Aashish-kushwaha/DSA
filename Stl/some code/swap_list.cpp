#include<iostream>
#include<list>
using namespace std;
bool even(int x)
{
    return (x%2==0);
}
int main()
{
    int n,key;
    list <int> l,l1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        l.push_back(key);
    }
    for(int i=0;i<n;i++)
    {
        cin>>key;
        l1.push_back(key);
    }
    l.merge(l1);
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
}
