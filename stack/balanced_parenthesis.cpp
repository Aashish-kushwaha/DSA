#include<bits/stdc++.h>
using namespace std;

bool matching(char a, char b)
{
    if((a=='(' && b==')')||(a=='{' && b=='}')||(a=='[' &&b==']'))
    return true;

    return false;
}

bool isBalanced(string s)
{
    stack <char> st;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        st.push(s[i]);
    else
    {
        if(st.empty()==true)
        {
            return false;
        }else if(matching(st.top(),s[i])==false)
        {
            return false;

        }else{
            st.pop();
        }
    }
    }

    return (st.empty()==true);

}
int main()
{
     string s;
     cin>>s;

     if(isBalanced(s))
     {
        cout<<"balanced parenthesis";
     }else{
        cout<<"not a balanced parenthesis";
     }
}