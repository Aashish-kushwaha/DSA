/*#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    int maxconsecutiveones(int a[],int n)
    {
        int res=0;
        for(int i=0;i<n;i++)
        {
            int curr=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==1)
                {
                    curr++;
                    
                }else
                {
                    break;
                }
            }
            res=max(res,curr);
        }
        return res;
    }
};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution obj;
       cout<<"most consecutive ones:"<< obj.maxconsecutiveones(arr,n)<<endl;
    }
}
*/


//efficient approach
#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    int maxconsecutiveones(int a[],int n)
    {
        int res=0;
        int curr=0;
       for(int i=0;i<n;i++)
       {
        if(a[i]==0)
        {
            curr=0;
        }else
        {
            curr++;
            res=max(curr,res);
        }
       }
       return res;
    }
};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solution obj;
       cout<<"most consecutive ones:"<< obj.maxconsecutiveones(arr,n)<<endl;
    }
}




