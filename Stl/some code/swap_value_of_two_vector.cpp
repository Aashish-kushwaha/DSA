#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> vrr(n);
    vector <int> vrr1(n);
    for(int i=0;i<n;i++)
    {
        cin>>vrr[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>vrr1[j];
    }
    vrr1.swap(vrr);
    for(int k=0;k<vrr.size();k++)
    {
        cout<<vrr[k]<<endl;
    }
    for(int l=0;l<vrr1.size();l++)
    {
        cout<<vrr1[l]<<endl;
    }
    return 0;

}