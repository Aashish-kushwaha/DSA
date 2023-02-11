#include<bits/stdc++.h>
using namespace std;
#define max 10
int top=-1;
void pushp(int a[],int x)
{
    if(top==max-1)
    {
        cout<<"overflow";
        return;
    }else
    {
        top++;
        a[top]=x;
    }
}

void popp(int a[])
{
    if(top==-1)
    {
        cout<<"underflow";
        return;
    }
    else{
        cout<<"popped elemment:"<<a[top];
        top--;
    }
}

void top(int a[])
{
    cout<<a[top];
}
int size()
{
    return top+1;
}
void printr(int a[])
{
    
    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[max];
    pushp(a,10);
    pushp(a,12);
    pushp(a,122);
    pushp(a,112);
    pushp(a,142);
    pushp(a,142);
    pushp(a,142);
    pushp(a,142);
    pushp(a,142);
    pushp(a,142);
    // pushp(a,142); if we addd this condition of overflow come
    printr(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    popp(a);
    // popp(a); if we use this statement there will be underflow condition

    

}