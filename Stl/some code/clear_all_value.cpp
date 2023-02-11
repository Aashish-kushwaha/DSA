#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vrr(n);
    for(int i=0;i<n;i++)
    {
        cin>>vrr[i];
    }
    vrr.clear();
    for(int i=0;i<vrr.size();i++)
    {
        cout<<vrr[i]<<" ";
    }
    if(vrr.empty())
    {
        cout<<"vector is empty";
    }
    vrr.push_back(5);
    if(vrr.empty())
    {
        cout<<"vector is not empty";
    }
}