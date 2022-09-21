#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int num,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n=10;
    int arr[n]={67,34,19,34,24,10,11,57,23,19};

    int num;
    cout<<"enter the number to be searched:";
    cin>>num;
    int k=linear_search(arr,num,n);
    if(k==-1)
    {
        cout<<"not found";
    }else
    {
    cout<<"found at:"<<k;
    }
    return 0;
}