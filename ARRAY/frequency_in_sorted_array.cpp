#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void frequency(int a[],int n)
    {
        int i=1;
        while(i<n)
        {
            int freq=1;
            while(i<n && a[i]==a[i-1])
            {
                freq++;
                i++;
            }
            cout<<a[i-1]<<" "<<freq<<endl;
            i++;
        }
        if(n==1||a[n-1]!=a[n-2])
        {
            cout<<a[n-1]<<" 1";
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
        ob.frequency(a,n);
    }
}