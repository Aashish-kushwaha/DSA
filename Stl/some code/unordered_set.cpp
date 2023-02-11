#include<iostream>
#include<unordered_set>
using namespace std;
 
 int main()
 {
     unordered_set <int> s;  // unordered set do not allow duplicate value
     s.insert(10);
     s.insert(20);
     s.insert(15);
     s.insert(30);
     
   

     for(auto it=s.begin();it!=s.end();it++)
     {
         cout<<*it<<" ";
     }
     cout<<endl;

     //s.erase(10); // remove all the 10
     s.erase(s.find(10));
     for(auto it=s.begin();it!=s.end();it++)
     {
         cout<<*it<<" ";
     }
     cout<<endl;

      unordered_multiset <int> s1;  // unordered multiset do allow duplicate value
     s1.insert(10);
     s1.insert(20);
     s1.insert(15);
     s1.insert(10);
     s1.insert(32);
     s1.insert(20);
     s1.insert(15);
     
     
   

     for(auto it=s1.begin();it!=s1.end();it++)
     {
         cout<<*it<<" ";
     }
     cout<<endl;

     //s.erase(10); // remove all the 10
     s1.erase(s1.find(10));
     for(auto it=s1.begin();it!=s1.end();it++)
     {
         cout<<*it<<" ";
     }
 }


 