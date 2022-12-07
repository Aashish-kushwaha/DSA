//trapping rain water:Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
//time complexity:O(n^2)
//space complexity:O(1)
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int trapping(int a[],int n)
        {
            int lmax,rmax,res=0;
            for(int i=1;i<n;i++)
            {
                lmax=a[i];
                for(int j=0;j<i;j++)
                {
                    lmax=max(lmax,a[j]); //tallest block on left side of the a[i]
                }
                rmax=a[i];
                for(int k=i+1;k<n;k++)
                {
                    rmax=max(rmax,a[k]);  // tallest block on the right side of the a[i] 
                }

                res=res+min(lmax,rmax)-a[i]; 
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution ob;
        int r=ob.trapping(arr,n);
        cout<<"amount of water stored:"<<r;
    }
}

//efficient approach: we precompute the leftmax and right max for each element 
//time complexity:O(n)
//space complexity:O(n)
class solution
{
    public:
    int trapping(int a[],int n)
    {
        int lmax[n],rmax[n];
        int res=0;
        lmax[0]=a[0];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],a[i]);
        }
        rmax[n-1]=a[n-1];
        for(int i=n-2;i>=0;i++)
        {
            rmax[i]=max(rmax[i+1],a[i]);
        }

        for(int i=1;i<n-1;i++)
        {
            res=res+max(lmax[i],rmax[i])-a[i];
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution ob;
        int r=ob.trapping(arr,n);
        cout<<"amount of water stored:"<<r;
    }
}