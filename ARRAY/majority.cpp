#include<bits/stdc++.h>
using namespace std;
/*
Naive approach: we find the count for every element and if it is greater than or equal to n/2 we return its index
time complexity: O(n^2)
*/
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

/*
efficient approach: we use moore's voting algorithm : what we do in this algorithm is we first try to find the candidate element that can become the majority element and then we check if t is a majority element. this solution we have two phases first to find the candidate element and second to check if it is a majority element,also this solution does not return the first occurance of the element
time complexity:O(n)
*/
class solution
{
    public:
    int majority(int a[],int n)
    {
        //PHASE 1
        int res=0;
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(a[res]==a[i])
            {
                count++;
            }else
            {
                count--;
            }
            if(count==0)
            {
                res=i;
                count=1;
            }
        }
        //PHASE 2
        count=0;
        for(int i=0;i<n;i++)
        {
            if(a[res]==a[i])
            {
                count++;
            }
        }
        if(count>n/2)
        return res;
        
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

