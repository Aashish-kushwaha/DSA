#include<bits/stdc++.h>
using namespace std;
bool csort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n=10;
    int a[n]={1,2,3,4,5,6,7,8,9,10};
    cout<<"array is sorted:"<<csort(a,n);
}