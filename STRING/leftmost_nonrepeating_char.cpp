#include<bits/stdc++.h>
using namespace std;
// timecomplexity=O(n)
// char nonrepeating(string s)
// {
//     for(int i=0;i<s.length();i++)
//     {
//         int c=(int)count(s.begin(),s.end(),s[i]);
//         if(c==1)
//         {
//             return s[i];
//         }
//     }
//     return '0';
// }

//time complexity=O(n)
const int c=256;
char nonrepeating(string s)
{
    int count[c];
    for(int i=0;i<s.length();i++)
    {
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]]==1)
        {
            return s[i];
        }
    }
    return '0';
}

//doing the above solution in one solution :dekh lena ek baar gfg

int main()
{
    string s;
    getline(cin,s);
    cout<<"leftmost non-repeating character:"<<nonrepeating(s);
}