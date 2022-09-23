// time complexity=O(n*k)
// Space complexity=O(1)

#include<bits/stdc++.h>
using namespace std;
/*
void r_array(int a[],int k,int n)
{
    while(k--)
    {
        int temp=a[0];
        for(int i=1;i<n;i++)
        {
            a[i-1]=a[i];
        }
        a[n-1]=temp;
    }
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before rotation:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"rotate array by k elements:";
    cin>>k;
    r_array(arr,k,n);
    cout<<"after rotate";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
*/
//second method

void reverse(int a[],int start,int end)
{
    for(int i=start,j=end;i<=(start+end)/2;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

int main()
{
    int n=10;
    int k;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    cout<<"enter the value of k:";
    cin>>k;
    k=k%n;
    //reverse first part from 0 to n-k-1
    reverse(arr,0,n-k-1);
    //reverse second part from n-k to n-1
    reverse(arr,n-k,n-1);
    //reverse the whole array 
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
