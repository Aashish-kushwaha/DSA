/*
Reverse an Array
Given an array A of size N, print the reverse of it
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Input:
1
4
1 2 3 4
Output:
4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
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
        
        for(int i=n-1;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}