#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int m=5;

    int mat[n+1][m+1]={0};
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
        
    }

    for(int i=0;i<=n;i++)
    {
         for(int j=0;j<=m;j++)
         {
                cout<<mat[i][j]<<" ";
         }
         cout<<endl;
    }
}