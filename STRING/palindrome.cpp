#include<bits/stdc++.h>
using namespace std;

//1. we store string in string 2 and reverse string 2 and lastly check if they both are same.
class solution
{
    public:
    bool ispalindrome(string s)
    {
        string st=s;
        reverse(st.begin(),st.end());
        return (st==s);
    }
}

//2. 

class solution
{
    public:
    bool ispalindrome(string s)
    {
        int begin=0;
        int end=s.length()-1;
        while(begin<end)
        {
            if(s[begin]!=s[end])
            {
                return false;
            }
            begin++;
            end--;
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
        string s;
        getline(cin,s);
        solution ob;
        if(ob.ispalindrome(s))
        {
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }
}