#include<bits/stdc++.h>
using namespace std;

int largestn(int a[],int n)
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[max])
        {
            max=i;
        }
    }

    return max;
}
int second_largest(int a[],int n)
{
    int largest=a[largestn(a,n)];
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=largest)
        {
            if(a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;

}
int main()
{
    int n=10;
    int arr[n]={23,44,19,374,920,283,18,231,29,10};

    cout<<"second largest element found at:"<<arr[second_largest(arr,n)];
}