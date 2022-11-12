#include<bits/stdc++.h>
using namespace std;

/*naive approach: time complexity=O(n^2)*/
int main()
{
    int n=7;
    int arr[n]={7,10,4,10,6,5,2};
    
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
    
}

//efficient approach:in this solution we traverse frm second last element and check it is greater then the element on right of it.and if it greater then it then we set it as current leader
int main()
{
    int n=7;
    int arr[n]={7,10,4,10,6,5,2};
    
    int curr_l=arr[n-1];
    cout<<curr_l<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>curr_l)
        {
            curr_l=arr[i];
            cout<<curr_l<<" ";
        }
    } 
}