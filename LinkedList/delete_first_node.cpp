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

node *deletefirst(node *h)
{
    node *c;
    c=h;
    h=h->next;
    delete c;

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
    head=deletefirst(head);
    cout<<"after";
    printr(head);



}