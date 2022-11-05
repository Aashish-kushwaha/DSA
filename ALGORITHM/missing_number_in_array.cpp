#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int missing_number(int arr[],int n)
    {
        int s=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
        sum=sum+arr[i];
        }
        
        return s-sum;
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
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        solution ob;
        cout<<ob.missing_number(arr,n)<<endl;
    }
}