// find the maximum difference between the element
#include<bits/stdc++.h>
using namespace std;
//naive approach:we find all the difference and maintain max from them
//time complexity:O(n^2)
class solution
{
    public:
    int maximumdiff(int a[],int n)
    {
        int m=a[1]-a[0];
        for(int i=0;i<n-1;i++)
        {
            for(int j=1;j<n;j++)
            {
                int m=max(m,a[j]-a[i]);
            }
        }
        return m;
    }
};
//efficient approach: every element can give us the maximum difference when you consider minimum value on left of it, keep track of min element so far and for every element we find the difference from minimum element and find max diff.
class solution1
{
    public:
    int maxdiff(int ar[],int N)
    {
        int res=ar[1]-ar[0];
        int minv=ar[0];

        for(int i=1;i<N;i++)
        {
            res=max(res,ar[i]-minv);
            minv=min(ar[i],minv);
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
        cout<<"maximum difference:"<<ob.maximumdiff(a,n);

        solution1 ob1;
        cout<<"maximum difference:"<<ob1.maxdiff(a,n);
    }
}