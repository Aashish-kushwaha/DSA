#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int n,m;
     int key;
     vector <vector<int> > vrr;
     
     cin>>m>>n;
     for(int i=0;i<m;i++)
     {
       vector <int> temp;
       for(int j=0;j<n;j++)
       {
          cin>>key;
          temp.push_back(key);
       }
       vrr.push_back(temp);
     }
     for(int i=0;i<vrr.size();i++)
     {
       for(int j=0;j<vrr[i].size();j++)
       {
         cout<<vrr[i][j]<<" ";
       }
       cout<<endl;
     }
     return 0; 
} 