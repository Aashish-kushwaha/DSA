//SELECTION SORT:the selection sort algorithm sorts an array by repeatedly finding the minimum element form the unsorted part and putting it at the beginning.
// the algorithm maintains two subarrays in a given array.
//->the subarray which is already sorted
//->the remaining subarray was unsorted
//time complexity: O(n) in all three best, average, worst

#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void selection(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            int min=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[min]>arr[j])
                {
                    min=j;
                }
            }
            swap(arr[i],arr[min]);
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
        ob.selection(arr,n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}