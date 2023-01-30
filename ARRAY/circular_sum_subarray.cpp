#include<bits/stdc++.h>
using namespace std;

/*
NAIVE approach: in this approach we find the maximum sub-array sum which is possible to obtain starting from this element.and then find the maximum sum among all sub-array sum, we use index variable to move in circular fashion in array.
TIME COMPLEXITY:O(n^2)
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


/*efficient approach:IDEA here is two find the maximum of the following two parts
(i).maximum sum of a normal sub-array(using kadane )
(ii).maximum sum of a circular sub-array(this we find by subtracting minimum sum subarray from the total sum of subarray.
*/

class solution
{
    public:
    int kadane(int a[],int n)
    {
        int res=a[0];
        int maxe=a[0];
        for(int i=1;i<n;i++)
        {
            maxe=max(maxe,maxe+a[i]);
            res=max(maxe,res);
        }
        return res;
    }
    int circular(int a[],int n)
    {
        int result;
        //phase 1 using kadane algorithm 
        int normal_sum=kadane(a,n);

        if(normal_sum<0)
        return normal_sum;

        //phase 2 here we have 2 option first either we make a new function of modified function two find the minimum sum sub-array and subtract it from the total sum of array, which will increase the length of the program.**the second option is to invert all the element of the array then with the help of same function we find the maximum sum sub array and instead of subtracting it from the total array sum we add it to total sum of array.
        int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        a[i]=-a[i];
    }
    int circular_sum=sum+kadane(a,n);
    result=max(normal_sum,circular_sum);
    
    return result;
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