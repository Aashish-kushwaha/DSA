#include<bits/stdc++.h>
using namespace std;

string reversed_string(string str)
{
    for(int i=0,j=str.length()-1;i<(str.length()-1)/2;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    return str;
}

int main()
{
    string str;
    getline(cin,str);
    cout<<str;
    cout<<"reversed string:"<<reversed_string(str);
    return 0;

}