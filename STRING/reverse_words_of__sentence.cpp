#include<bits/stdc++.h>
using namespace std;
// one method is to use the stack of string and push all the words in it and then take it out so we get a reverse string but in that method we use a auxilary space.


//in this method what we do is to reverse the every word in the string and at last reverse the whole string.
int main()
{
    string s;
    getline(cin,s);
    cout<<"before reverse:"<<s<<endl;


    //reversing the words in the string
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


    // reversing the whole string;
    reverse(st.begin(),st.end());
    cout<<"word reverse:"<<st;
}