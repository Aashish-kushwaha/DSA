#include<iostream>
using namespace std;

int main()
{
    string str="";      //empty string
    cout<<"empty string:"<<str;

    // how to take input
    //#method 1
    string str1;
    cin>>str1;
    cout<<str1<<endl;
    
    /*//#method 2:this method is for c-style string
    string str2;
    cin.get(str2,50);
    cout<<str2<<endl;
*/
    //#method 3
    string str3;
    getline(cin,str);
    cout<<str3;

    //using append()
    string str4="hello";
    string str5="world";

    cout<<str4<<endl;
    cout<<str5<<endl;
    str4.append(str5);
    cout<<str4<<endl;

    //concatenate
    string str6="graphic";
    string str7="era";
    string str8=str6+str7;
    cout<<str6<<endl;
    cout<<str7<<endl;
    cout<<str8<<endl;

    //stirng function

    //length():return the length of a string.
    string s1="length of the string";
    cout<<"length of string:"<<s1.length()<<endl;

    //resize(): the resize() function is used to either increase or decrease the size of a string.

    string s2="c++ programming";
    cout<<"original string:"<<s2<<endl;
    s2.resize(10);
    cout<<"stirng after resize:"<<s2<<endl;

    //ITERATOR FUNCTION
    //begin():the begin function return an iterator that points to the beginning of teh string.
    string str10="learning";
    string::iterator it;
    it=str10.begin();
    cout<<*it<<endl;

    string::iterator it1;
    it1=str10.end();
    cout<<*it1<<endl;

    //manipulating function
    //cop():the copy() fuction is used to copy one sub-string to the another string mentioned in the function's arguments, it takes 3 arguments(minimum two), target array, length to be copied, starting postion in the string.
    string st="aashish krishna piyush rohan";
    char st2[10];

    st.copy(st2,10,5);
    cout<<st2<<endl;

    //swap:the swap function swaps one string with another
    string ss1="apple";
    string ss2="orange";
    cout<<"before swap"<<endl;
    cout<<"f1:"<<ss1<<endl;
    cout<<"f2:"<<ss2<<endl;

    ss1.swap(ss2);
    cout<<"after swap"<<endl;
    cout<<"f1:"<<ss1<<endl;
    cout<<"f2:"<<ss2<<endl;

    
}