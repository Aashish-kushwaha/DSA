#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void subsequence(int index,int arr[],int n)
{
    if(index==n)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    return;
    }

    v.push_back(arr[index]);
    subsequence(index+1,arr,n);
    v.pop_back();    

        subsequence(index+1,arr,n);
}
 
int main(){
    int arr[3]={1,2,3};  
   
    subsequence(0,arr,3);
}