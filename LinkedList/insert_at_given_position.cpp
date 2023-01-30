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

node *insertpos(node *h,int pos,int n)
{
    node *temp=new node(n);
    if(pos==1)
    {
        temp->next=h;
        return h;
    }

    node *c=h;
    for(int i=1;i<=pos-2;i++)
    {
        c=c->next;
    }
    if(c==NULL)
    {
        return h;
    }

    temp->next=c->next;
    c->next=temp;

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

    int n,p;
    cout<<"enter number and position you want to insert:";
    cin>>n>>p;
    cout<<"before:";
    printr(head);
    cout<<endl;    
    head=insertpos(head,p,n);
    cout<<"after";
    printr(head);



}