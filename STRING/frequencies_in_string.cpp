#include<bits/stdc++.h>
using namespace std;
 class solution
 {
    public:
    void frq(string s)
    {
        int count[26]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]>0)
            {
                cout<<(char)(i+'a')<<" "<<count[i]<<endl;
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
        solution ob;
        ob.frq(s);
    }
}