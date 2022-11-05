#include<bits/stdc++.h>
using namespace std;
class linear_search{
    public:
    int l_search(int arr[],int n,int k)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                return 1;
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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        linear_search ob;
        cout<<ob.l_search(arr,n,k)<<endl;;
    }
}