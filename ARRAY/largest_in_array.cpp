/*
find the largest element in the array
*/
#include<bits/stdc++.h>
using namespace std;


//naive approach:time complexity:O(n) space complexity:O(1)
int max_fun(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        max=i;
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[max])
            max=j;
        }
    }
    return max;
}
int main()
{
    int n=10;
    int arr[n]={23,53,123,4,59,5,67,329,34,90};

    cout<<",maximum is found at:"<<arr[max_fun(arr,n)];
}

// Efficient approach  time complexity:O(n)  space complexity:O(1)
int max_largest(int a[],int n)
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

int main()
{
    int n=10;
    int arr[n]={23,53,123,4,59,5,67,329,34,90};

    cout<<"maximum is found at:"<<arr[max_largest(arr,n)];
}

