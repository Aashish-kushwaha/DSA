#include<bits/stdc++.h>
using namespace std;


// naive approach time complexity=O(n^2) , space complexity=O(1)
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
    int res=-1;                     // here we initialize res=-1 because we have one corner case which is if all values are same there will be no second largest, if we initalize res with 0 then function will return first element of value as second largest 
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


/* efficent approach:
here we have res as -1 and lar as 0 now we have three condition for new element coming in the array
-> if a[i]>a[lar]  then res=lar and lar=i
-> if a[i]==a[lar] ignore 
->a[i]<a[lar] then ther are few more condition here
|-> if res==-1 then res=i
|-> if a[i]<=a[res] ignore
|-> if(a[i]>a[res]) res=i


*/
int s_largest(int a[],int n)
{
    int res=-1;
    int lar=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[lar])
        {
            res=lar;
            lar=i;
        }else if(a[i]!=a[lar])
        {
            if(res==-1||a[i]>a[res])
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

    cout<<"second largest element found at:"<<arr[s_largest(arr,n)];
}
