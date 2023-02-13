/*
Given an array of distinct integer, find closest(position wise) greater on left of every element. if there is no greater element on left then print -1
*/

#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    void previous_great(int a[],int n)
    {
        stack <int> s;
        s.push(a[0]);
        cout<<-1<<" ";
        for(int i=1;i<n;i++)
        {
            while(s.empty()==false && s.top()<=a[i])
            {
                s.pop();
            }

            int pg=(s.empty())?-1:s.top();
            cout<<pg<<" ";
            s.push(a[i]);
        }
    }

    void previous(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            int j;
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>a[i])
                {
                    cout<<a[j]<<" ";
                    break;
                }
            }
            if(j==-1)
            {
                cout<<-1<<" ";
            }
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        solution ob;
        ob.previous(arr,n);
    }
}