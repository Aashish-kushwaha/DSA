#include<bits/stdc++.h>
using namespace std;

/*
// using temporary array  time complexity=O(n),space complexity=O(n)
int main()
{
    int n=10;
    int arr[n]={1,2,3,4,5,67,98,45,34,30};

    int temp[n];
    cout<<"before:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        temp[j]=arr[i];
    }
    cout<<"after:";
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
*/
// avoiding the extra space 
int main()
{
    int n=11;
    int a[n]={1,2,3,4,5,6,7,8,9,10,99};
    int temp;
    cout<<"before:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    cout<<"after:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


}