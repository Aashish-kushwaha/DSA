//BINARY SEARCH: binary search is a searching algorithm which uses the divide and conquer technique to perform the search on sorted data.
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int bsearch(int arr[],int n,int k)
    {
        int a,b;
        a=0;
        b=n-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(arr[mid]==k)
            {
                return 1;
            }else if(arr[mid]<k)
            {
                a=mid+1;
            }else
            {
                b=mid-1;
            }
        }
        return -1;
    }
};
int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution ob;
        cout<<ob.bsearch(arr,n,k)<<endl;
    }  

}
