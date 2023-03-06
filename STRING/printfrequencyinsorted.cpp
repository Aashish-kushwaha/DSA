#include<bits/stdc++.h>
using namespace std;
void frequency(string s)
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
            cout<<(char)(i+'a')<<" "<<count[i];
        }

    }
}
int main()
{
    string s;
    getline(cin,s);
    cout<<"string:"<<s<<endl;
    frequency(s);

}