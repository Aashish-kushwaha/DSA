#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector <int> v={10,15,6,20,56};
   auto i=v.begin();       // i is the iterator which point to begining of vector
   cout<<*i<<endl;

   i++;
   cout<<*i<<endl;

   i=v.end();           // i is the iterator which point to the adderess next to the last element
    cout<<*i<<endl;
   i--;
    cout<<*i<<endl;
 return 0;

}