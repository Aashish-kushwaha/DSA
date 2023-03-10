#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void patternsearch(string s,string p)
    {
        int n=s.length();
        int m=p.length();
        for(int i=0;i<=n-m;i++)
        {
            int j;
            for( j=0;j<m;j++)
            {
                if(s[i+j]!=p[j])
                {
                    break;
                }
            }
            // cout<<j<<"."<<m<<endl;
            if(j==m)
            {
                cout<<i<<" ";
            }
        }
    }
};
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        cin.ignore();
        string p;
        getline(cin,p);
        solution ob;
        ob.patternsearch(s,p);
    }
}