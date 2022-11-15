#include<bits/stdc++.h>
using namespace std;
int max_diff(int a[],int n)
    {
        int ma=a[1]-a[0];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;i++)
            {
                ma=max(ma,a[j]-a[i]);
                
            }
        }
     return ma;

    }


int main()
{
   
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        cout<<"maxdiff is :"<<max_diff(a,n);

    
}