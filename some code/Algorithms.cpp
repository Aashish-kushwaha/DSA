#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v{3,2,5,1,-2,6};
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<"before sorting:"<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    sort(v.begin(),v.end());
    
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

}