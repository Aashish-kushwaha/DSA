/* SET:->> set is a type of associative containers in which each element has to be UNIQUE
    ->> the values are stored in a specific order 
syntax: set<datatype> setname;
       -->> ordered set:the set stores the element in sorted order. and is implemented using balanced Binary search tree. time complexity of insertion , search, and deletion on set is O(log n) where n is the number of elements in sets
       |
 SET-->>
       |
       -->> unordered set:the set stores the element in unsorted order.and is implemented using hashing .time complexity of insertion,search,and deletion on unordered  set is O(1)

MULTISET:->> multiset is similar to the set, with the exception can have the duplicates values. MULTISET is of 2 types ordered and unordered 
*/  
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s;
    //insert->> To insert new element in a set
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(45);
    s.insert(12);
    s.insert(19);

    for(auto it=s.begin(); it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //find()->>searches element in the set: it returns the iterator of that  searched number if it is found otherwise it returns the end element iterator
    if(s.find(10) != s.end())
    {
        cout<<"10 is found in a set"<<endl;
    }else
    {
        cout<<"10 not found in a set"<<endl;
    }
    //erase()-->> deletes an element or set of elements from the set 
    s.erase(10);  // this can also be done by giving iterator as an argument in the erase function EXAMPLE:- s.erase(s.find(10)); ->this returns the iterator/pointer to element 10

     for(auto it=s.begin(); it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
   //for set of elements 
   s.erase(s.find(12),s.find(20));  //here 12 will be included and 20 will be excluded mean 12,19 will be deleted. ***never write big number first in the range it will give the segmentation fault***....**also do not write the non existing element in the set bcoz when element is not found using find function it return the iterator of end element that later creat a problem**
    for(auto it=s.begin(); it!=s.end();it++)
    {
        cout<<*it<<" ";
    }



    cout<<endl;
    multiset <int> st;
    //1.insert->> inserts new element in set
    st.insert(10);
    st.insert(23);
    st.insert(10);
    st.insert(15);
    st.insert(30);
    st.insert(20);
    st.insert(15);

    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    st.erase(st.find(10)); // it just erases the first  10 other duplicates are not touched
    st.erase(10); // it erases all the 10

    for(auto it:st)
    {
        cout<<it<<" ";
    }
    
}