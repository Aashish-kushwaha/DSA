#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int a[10]={23,2,1,3,4,56,5,34,78,87};

    int min=0,res=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[min])
        {
            res=min;
            min=i;
        }else if(a[i]!=a[min])
        {
            if(res==-1 || a[i]<a[min])
            {
                res=i;
            }
        }
    }
    cout<<a[res];
    cout<<endl;
    cout<<a[min];
}