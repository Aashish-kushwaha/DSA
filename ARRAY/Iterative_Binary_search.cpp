#include<bits/stdc++.h>
using namespace std;

//Iterative method
int binary_search(int a[],int n,int num)
{
    int l=0;
    int r=n-1;

    while(l<r)
    {
        int mid=l-(l-r)/2;
        if(a[mid]==num)
        {
            return mid;
        }else if(a[mid]<num)
        {
            l=mid+1;
        }else if(a[mid]>num)
        {
            r=mid-1;
        }
    }
    return -1;
}


int main()
{
    int n=10;
    int a[n]={1,2,3,4,5,6,7,8,9,10};
    
    int num;
    cout<<"enter number to be searched:";
    cin>>num;
    
   int  k=binary_search(a,n,num);
   if(k==-1)
   {
    cout<<"not found";
   }else{
    cout<<"fount at:"<<k;
   }
}