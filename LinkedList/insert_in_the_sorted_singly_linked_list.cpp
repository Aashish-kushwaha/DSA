#include<bits/stdc++.h>
using namespace std;
struct  node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node *insertsorted(node *h,int x)
{
    node *temp=new node(x);
    if(h==NULL)
    {
        return temp;
    }

    if(x<h->data)
    {
        temp->next=h;
        return temp;
    }
    node *c=h;
    while(c->next!=NULL && c->next->data<x)
    {
        c=c->next;
    }

    temp->next=c->next;
    c->next=temp;
    return h;
    
}
void printr(node *h)
{
    node *c=h;
    while(c!=NULL)
    {
        cout<<c->data<<" ";
        c=c->next;
    }
}
int main()
{
    node *head=NULL;
    head=insertsorted(head,20);
    head=insertsorted(head,10);
    head=insertsorted(head,40);
    head=insertsorted(head,30);
    printr(head);
}