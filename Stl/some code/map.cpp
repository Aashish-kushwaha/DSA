/* map is a associative containers that store elements in mapped fashion 
each element is has a key value and a mapped value.  we cannot repeat key but can override value

    -->>ordered:-> based on balanced Binary tree of keys,keys are in sorted order o(log n)
    |
map--
    |
    -->>unordered:->implemented using hashingO(1)
Multimap : multimap takes duplicate value
 */

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int ,int> m;  //<int,string>, <any data_type,data_type>
     //1.insert-> ut insert a new key value pair in the map
     m.insert({10,5});
     m.insert(make_pair(4,15));
     m.insert(make_pair(10,6)); //using insert function we cannot override the value 
 
     for(auto it =m.begin();it!=m.end();it++)
     {
         cout<<it->first<<" "<<(*it).second<<endl; // the output will show that value of key 10 is not override
     }
     m[10]=6;  // this method can be used to override the value and also be used to insert the new values as shown below
     m[11]=34; // but this is not allowed in multimap
cout<<endl;
     for(auto it=m.begin();it!=m.end();it++)
     {
         cout<<it->first<<" "<<it->second<<endl;
     }

     //2.find-> searches for given value and retuns the iterator
     if(m.find(10)!=m.end())
     {
         cout<<m.find(10)->second<<endl;// it can also be replaced by 
         cout<<m[10];
     }
     //3.erase-->> it is used to erase the key value
     m.erase(10);
     for( auto it=m.begin();it!=m.end();it++)
     {
         cout<<it->first<<" "<<it->second<<endl;
     }

     cout<<m[100]<<endl;//when we try to a access some random key it returns 0(Zero) and it also insert that key in map;

    multimap <int,int> m1;
    m1.insert(make_pair(4,6));
    m1.insert(make_pair(10,9));
    m1.insert(make_pair(12,6));
    m1.insert(make_pair(10,7));

    for(auto it=m1.begin();it!=m1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;

}