#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    int arr[n]={3,43,56,24,23,45,67,2,56,23};
    int min=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[min])
        {
            min=i;
        }
    }

    cout<<arr[min];
}