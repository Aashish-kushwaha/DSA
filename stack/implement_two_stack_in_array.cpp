#include<bits/stdc++.h>
using namespace std;
#define max 10
int top=-1;
int top1=0;
int top2=max-1;

void push1(int a[],int x)
{
    if(top1<top2-1)
    {
        a[top1]=x;
        top++;

    }
}

void push2(int a[],int x)
{
    if(top1<top2-1)
    {
        a[top2]=x;
        top--;

    }
}

void pop1(int a[],int x)
{
    if(top1>0)
    {
        cout<<"popped element:"<<a[top1];
        top1--;
    }
}

void pop2(int a[],int x)
{
    if(top2<max)
    {
        cout<<"popped element:"<<a[top2];
        top1++;
    }
}

void printr(int a[])
{
    for(int i=0;i<max;i++)
    {

        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[max];
    push1(a,10);
    push1(a,20);
    push1(a,30);
    push2(a,100);
    push2(a,19);

    printr(a);


}