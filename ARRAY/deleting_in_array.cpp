#include<bits/stdc++.h>
using namespace std;

void del(int a[],int n)
{
    for(int i=n;i<10;i++)
    {
        a[i]=a[i+1];
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"before deleting:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    del(arr,4);
    cout<<endl;
    cout<<"after deleting";
    {
        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}