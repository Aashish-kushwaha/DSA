#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    int majority(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
            if(count>=n/2)
            {
                return i;
            }
        }
        return -1;
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
        cout<<"majority element index:"<<ob.majority(a,n);
    }
}