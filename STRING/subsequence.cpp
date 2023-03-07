// in this solution we match the character of string 1 and string 2 and if they match we increment both i and j by 1 but if they dont we move only in string 2 as it the bigger string and string 1 is sub sequence

#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool checksubsequence(string s1,string s2)
    {
        int i=0;
        int j=0;
        while(i<s1.length()&&j<s2.length())
        {
            if(s1[i]==s2[j])
            {
                i++;
                j++;
            }else{
                j++;
            }
        }
        if(i==s1.length())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string s1;
        getline(cin,s1);
        string s2;
        getline(cin,s2);
        solution ob;
        if(ob.checksubsequence(s1,s2))
        {
            cout<<"yes";
        }else
        {
            cout<<"no";
        }
    }
}