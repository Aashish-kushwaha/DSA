#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
    bool isanagram(string s1,string s2)
    {
        // for(int i=0;i<s1.length();i++)
        // {
        //    int c=(int)count(s2.begin(),s2.end(),s1[i]);
        // //   cout<<c<<"*";
        //     if(c!=1)
        //     {
        //             return false;
        //     }
        // }
        // return true;

        // for(int i=0;i<s1.length();i++)
        // {
        //     int c1=(int)count(s1.begin(),s1.end(),s1[i]);
        //     int c2=(int)count(s2.begin(),s2.end(),s1[i]);

        //     if(c1!=c2)
        //     return false;
        // }

        // return true;

        if(s1.length()!=s2.length())
        return false;

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            return false;
        }

        return true;

    }
};
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s1;
        getline(cin,s1);
        cout<<"s1:"<<s1<<endl;
        
        string s2;
        getline(cin,s2);
        cout<<"s2:"<<s2<<endl;

        solution ob;
        cout<<"given strings are anagram:"<<ob.isanagram(s1,s2);
    }
}