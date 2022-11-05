/*
INSERTION SORT: insertion sort works similar to the way we sort playing cards in our hands. the array is virtually divided into a sorted and unsorted part. values from the unsorted part are picked and placed at the correct position in the sorted part.
time complexity
best case:O(n)  when array is already sorted
avg case :O(n^2)
worst case:O(n^2) when array is reversed sorted

BINARY INSERTION SORT:binary insertion sort uses binary search to find the proper location to insert the selected item at iteration. it 
binary search is used to reduce the number of comparison in insertion sort this modification is known as binary insertion sort
time complexity 
worst case: O(logn)
*/
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void insertion(int arr[],int n)
    {
        for(int i=1;i<n;i++)
        {
            int temp=arr[i],j=i-1;
            while(j>=0&&arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=temp;
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
        ob.insertion(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}