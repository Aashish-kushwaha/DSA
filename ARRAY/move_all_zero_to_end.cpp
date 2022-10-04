#include<bits/stdc++.h>
using namespace std;

// naive approach: O(n^2),O(1)
void movez(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]!=0)
                swap(a[i],a[j]);
                
            }
        }
    }
}
int main()
{
    int n=10;
    int arr[n]={2,0,02,283,02,0,0,12,0,10};
    cout<<"before moving:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n after moving:";
    movez(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//efficient:we traverse array from start whereever we get a zero we swap it with nonzero and increment count so that we keep the track of non zero elements
void movez(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;   
        }
    }
}
int main()
{
    int n=10;
    int arr[n]={2,0,02,283,02,0,0,12,0,10};
    cout<<"before moving:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n after moving:";
    movez(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
