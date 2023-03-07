#include<bits/stdc++.h>
using namespace std;
char leftmostrepeating(string s)
{
    for(int i=0;i<s.length();i++)
    {
        int c=1;
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
        if(c>1)
        return s[i];
    }
    return '0';
    

}
int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin,s);
        cout<<"lef most repeating:"<<leftmostrepeating(s);
    }
}