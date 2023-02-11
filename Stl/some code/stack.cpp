//stack is a ADT becoz we what what stack is but we dont know how it is implimented 
// it can be im[limented using linked list , array , it follows LIFO 
#include<iostream>
#include<stack>
using namespace std;
void printstack(stack<int> st)
{
    while(!st.empty() )
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    stack <int> st,st1;
    //push-> pushes new element in ths stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st1.push(6);
    st1.push(7);
    st1.push(8);
    st1.push(9);
    st1.push(10);
    //top-> returns the value of the top element that is last element that you pushed
    cout<<st.top()<<endl; 

    //pop -> it pops the top element from the stack
   // st.pop();
    cout<<st.top()<<endl;// now top element is 4
    cout<<st.size()<<endl;
    if(st.empty())
        cout<<"stack is empty"<<endl;
    else    
        cout<<"stack is not empty"<<endl;
    
    cout<<"before swapping"<<endl;
    cout<<"st:";
    printstack(st);
    cout<<endl;
    cout<<"st1:";
    printstack(st1);
    cout<<endl;

    st.swap(st1);

    cout<<"after swapping";
    cout<<"st:";
    printstack(st);
    cout<<endl;
    cout<<"st1:";
    printstack(st1);
    cout<<endl;   

}
