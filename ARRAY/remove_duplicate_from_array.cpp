//remove all duplicates values and return number of distinct values
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int removedu(int a[],int n)
    {
        int j=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                a[j++]=a[i];
            }
        }
        return j;
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
        cout<<"before removing:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       cout<<"number of duplicates value:"<<ob.removedu(arr,n)<<endl;
       cout<<"after removing:";
         for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }


    }
}