// time complexity=O(n*k)
// Space complexity=O(1)
/*
#include<bits/stdc++.h>
using namespace std;
void r_array(int a[],int k,int n)
{
    while(k--)
    {
        int temp=a[0];
        for(int i=1;i<n;i++)
        {
            a[i-1]=a[i];
        }
        a[n-1]=temp;
    }
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before rotation:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"rotate array by k elements:";
    cin>>k;
    r_array(arr,k,n);
    cout<<"after rotate";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
*/
/* 
JUGGLING ALGORITHM: time complexity =O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }else
    {
       return gcd(b,a%b);
    }
}
int main()
{
    int n=12;
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int k;
    for( int i=0;i<12;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"enter the value of k";
    cin>>k;
    k=k%12;
    int d,j,temp;
    d=gcd(n,k);
    int p;
    for(int i=0;i<d;i++)
    {
         j=i;
        temp=a[i];
        p=d;
        while(p--)
        {
            a[j]=a[j+d];
            j=j+d;
        }
        a[j]=temp;
    }

    for(int i=0;i<12;i++)
    {
        cout<<a[i]<<" ";

    }

    
}






