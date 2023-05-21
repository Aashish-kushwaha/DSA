#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,m=6;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(auto it:adj)
    {
        for(auto j:it)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

     
}