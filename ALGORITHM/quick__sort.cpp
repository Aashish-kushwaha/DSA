/*
QUICK SORT: quick sort is based on divide and conquer algorithm. it picks an element as pivot and partitions the given array around the picked pivot. there are many version of quick sort that pick pivot in different ways.
->always pick the first element(Hoore's partition)
->always pick the last element(lomuto partition)
->pick the random element as pivot.
->pick median as pivot. 
time complexity:O(nlogn)
*/
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int partition(int arr[],int a,int b)
    {
        int pivot=arr[b];
        int i=a-1;
        for(int j=a;j<=b-1;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[b]);
        return i+1;
    }

    void quicks(int arr[],int a,int b)
    {
        if(a<b)
        {
            int p=partition(arr,a,b);
            quicks(arr,a,p-1);
            quicks(arr,p+1,b);
        }   
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution ob;
        ob.quicks(arr,0,n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}