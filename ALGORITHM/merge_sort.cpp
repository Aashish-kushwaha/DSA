/*
MERGE SORT:the merge sort algorithm is algorithm that is based on the divide and conquer paradigm. the array is initially divided into two equal halves and then they are combined in a sorted manner.
time complexity:O(nlogn)

*/
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void merge(int a[],int l,int m,int r)
    {
        int n1=m-l+1;
        int n2=r-m;
        int L[n1];
        int R[n2];

        for(int i=0;i<n1;i++)
        {
            L[i]=a[l+i];
        }
        for(int j=0;j<n2;j++)
        {
            R[j]=a[m+1+j];
        }

        int i=0,j=0,k=l;
        while(i<n1 &&j<n2)
        {
            if(L[i]<=R[j])
            {
                a[k++]=L[i++];
            }else
            {
                a[k++]=R[j++];
            }
        }
        while(i<n1)
        {
            a[k++]=L[i++];
        }
        while(j<n2)
        {
            a[k++]=R[j++];
        }

    }
    void mergesort(int a[],int l,int r)
    {
        if(r>l)
        {
            int m=(l+r)/2;
            mergesort(a,l,m);
            mergesort(a,m+1,r);
            merge(a,l,m,r);

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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        solution ob;
        ob.mergesort(a,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
