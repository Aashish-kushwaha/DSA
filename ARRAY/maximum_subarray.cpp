//naive approach:we compute all subarray  and find the maximum one
//time complexity:O(n^2)
#include<bits/stdc++.h>
using namespace std;
/*class solution
{
    public:
    int maxsum(int a[],int n)
    {
        int res=a[0];
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+a[j];
                res=max(res,sum);
                cout<<res<<" ";
            }
            
        }
        return res;
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solution ob;
        int res=ob.maxsum(a,n);
        cout<<"maximum subarray:"<<res;
    }
}
*/
/*
efficient approach:in this solution for every element we find the subarray with maximum sum which end with this element
time complexity:O(n)
 
*/

class solution 
{
    public:
    int maxsum(int a[],int n)
    {
        int res=a[0];
        int maxend=a[0];
        for(int i=1;i<n;i++)
        {
            maxend=max(maxend+a[i],a[i]);
            res=max(maxend,res);
        }
        return res;
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solution ob;
        int res=ob.maxsum(a,n);
        cout<<"maximum subarray:"<<res;
    }
}
