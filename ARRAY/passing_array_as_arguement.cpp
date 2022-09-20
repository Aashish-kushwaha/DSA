#include<bits/stdc++.h>
using namespace std;
void fun(int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=i;
    }
}

int main()
{
    int n=5;
    int arr[5]={45,34,23,98,10};
    fun(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}