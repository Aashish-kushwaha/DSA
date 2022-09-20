#include<bits/stdc++.h>
using namespace std;

void fun(int a[],int n,int pos)
{
    for(int i=8;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=n;
}

int main()
{
    int a[10]={1,2,3,4,5,6};
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    fun(a,10,3);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}