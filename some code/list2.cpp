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
    list <int> l;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        l.push_back(key);
    }
    l.remove_if(even);  // here we can pass the condition using function which return a boolen value
    l.reverse(); // used to reverse
    l.clear();
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}