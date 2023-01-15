#include<bits/stdc++.h>
using namespace std;

/*
NAIVE approach: in this approach we find the maximum sub-array sum which is possible to obtain starting from this element.and then find the maximum sum among all subarray sum, we use index variable to move in circular fashion in array.
*/
class solution
{
    public:
    int circular(int a[],int n)
    {
        int res=a[0];
        int curr_max;
        int curr_sum;
        for(int i=0;i<n;i++)
        {
            curr_max=a[i];
            curr_sum=a[i];
            for(int j=1;j<n;j++)
            {
                int index=(i+j)%n;
                curr_sum=curr_sum+a[index];
                curr_max=max(curr_sum,curr_max);
            }
            res=max(res,curr_max);
        }
        return res;
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
        cout<<"maximum circular subarray:"<<ob.circular(a,n);
    }
}