#include<bits/stdc++.h>
using namespace std;

void patternsearch(string s,string p)
{
    int n=s.length();
    int m=p.length();

    int i=0;
    while(i<=n-m)
    {
        int j=0;
        for(j=0;j<m;j++)
        {
            if(p[j]!=s[i+j])
            break;
        }

        if(j==m)
        cout<<i<<" ";

        if(j==0)
        i++;
        else
        i=i+j;
    }
}
int main()
{
    string s;
    getline(cin,s);
    string p;
    getline(cin,p);
    patternsearch(s,p);
}