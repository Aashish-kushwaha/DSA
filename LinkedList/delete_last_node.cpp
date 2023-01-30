#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
node *insertr(node *h,int x)
{
    node *temp=new node(x);
    if(h==NULL)
    {
        return temp;
    }

    node *c=h;
    while(c->next!=NULL)
    {
        c=c->next;
    }
    c->next=temp;
    return h;
}

node *deletelast(node *h)
{
    if(h==NULL)
    return NULL;

    if(h->next==NULL)
    {
        delete h;
        return NULL;
    }

    node *temp=h;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;

    temp->next=NULL;

    return h;
}

void printr(node *h)
{
    node *t;
    t=h;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main()
{
    node *head=NULL;
    head=insertr(head,10);
    head=insertr(head,20);
    head=insertr(head,30);

    cout<<"before:";
    printr(head);
    cout<<endl;
    head=deletelast(head);
    cout<<"after";
    printr(head);



}