//BUBBLE SORT: it is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they in wrong order.
//time complexity: O(n^2) in all three best, average, and worst cases.
//number of comparison in worst case: n(n-1)/2
//number of swaps in worst case: n(n-1)/2
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void bubble(int arr[],int n)
    {
        int com=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                com++;
                if(arr[j]>arr[j+1])
                {

                    swap(arr[j],arr[j+1]);
                }
            }
        }
        cout<<"number of comparison:"<<com<<endl;
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
        ob.bubble(arr,n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}