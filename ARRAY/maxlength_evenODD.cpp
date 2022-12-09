//maximum length even odd subarray
//time complexity:O(n^2)
//space complexity:O(1)
#include<bits/stdc++.h>
using namespace std;
/*class solution
{
    public:
    int maxlengthevenodd(int a[],int n)
    {
        int resl=1;
        for(int i=0;i<n;i++)
        {
            int currl=1;
            for(int j=i+1;j<n;j++)
            {
                if((a[j]%2==0&&a[j-1]%2!=0)||((a[j]%2!=0&&a[j-1]%2==0)))
                {
                    currl++;
                }else
                {
                    break;
                }
            }
            resl=max(resl,currl);
        }
        return resl;
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
       int r= ob.maxlengthevenodd(a,n);
       cout<<"maximum length subarray:"<<r;
    }
}
*/


//efficient approach: using kadane approach

class solution
{
    public:
    int maxlengthevenodd(int a[],int n)
    {
        int currl=1,resl=1;
        for(int i=1;i<n;i++)
        {
            if((a[i]%2==0&&a[i-1]%2!=0)||(a[i]%2!=0&&a[i-1]%2==0))
            {
                currl++;
                resl=max(resl,currl);
            }else
            currl=1;
        }
        return resl;
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
       int r= ob.maxlengthevenodd(a,n);
       cout<<"maximum length subarray:"<<r;
    }
}