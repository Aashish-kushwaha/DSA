#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout<<"before reverse:"<<s<<endl;
    istringstream ss(s);
    string w;
    string st="";
    while(ss>>w)
    {
        reverse(w.begin(),w.end());
        st=st+w+' ';
        
    }

    st.pop_back();
    cout<<"after reverse:"<<st<<endl;
    reverse(st.begin(),st.end());
    cout<<"word reverse:"<<st;
}