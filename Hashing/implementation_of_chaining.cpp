#include<bits/stdc++.h>
using namespace std;

class Hash{
    int bucket;

    
list<int> *myhash;
    public:
    //constructor to initialize 
    Hash(int b)
    {
        bucket=b;
        myhash= new list<int>[bucket];
    }


    //insert key function
    void insertitem(int k)
    {
        int index=k%bucket;
        myhash[index].push_back(k);
    }

    //delete key function
    void deleteitem(int k)
    {
        int i=k%bucket;
        myhash[i].remove(k);
    }

    //display hash table
    void displayhash()
    {
       
        for(int i=0;i<bucket;i++)
        {
            cout<<i;
            for(auto it=myhash[i].begin();it!=myhash[i].end();it++)
            {
                cout<<"-->"<<*it;
            }
            // i++;
            cout<<endl;
        }
    }

};
int main()
{
    //number of keys
    int n;
    cin>>n;

    int a[n];
    //input keys;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // intialize buckect
    Hash h(7);

    //insert keys in the hash table
    for(int i=0;i<n;i++)
    {
        h.insertitem(a[i]);
    }
    //display hash table
    h.displayhash();

    //delete hash element
    h.deleteitem(12);

    h.displayhash();

}