#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //vector <datatype> vetorname
    vector <int> vrr;
  //function1. size()=>returns the number of elements in a vector
    cout<<vrr.size()<<endl;
  //function2. push_back()=> it puches the element at the back at the end of vector
  vrr.push_back(10);
  cout<<vrr.size()<<endl;
  cout<<vrr[0];
  cout<<vrr.max_size();
      return 0;
}