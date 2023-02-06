#include<bits/stdc++.h>
using namespace std;

struct node
{
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
        temp->next=temp;
        return temp;

    }

    node *curr=h;
    while(curr->next!=h)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=h;

    return h;
}

node *deleteh(node *h)
{
    if(h->next==h)
    {
        delete h;
        return NULL;
    }

    node *c=h;
    while(c->next!=h)
    {
        c=c->next;
    }
    c->next=h->next;
    delete h;

    return c->next;
}

node *deletek(node *h,int k)
{
    if(h==NULL)
    {
        return h;
    }

    if(k==1)
    {
        return deleteh(h);
    }
    node *curr=h;
    for(int i=0;i<k-2;i++)
    {
        curr=curr->next;
    }
    node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return h;
}

void printr(node *h)
{
    cout<<h->data<<" ";
    for(node *c=h->next;c!=h;c=c->next)
    {
       cout<<c->data<<" ";
    }

}

int main()
{
    node *head=NULL;
    head=insertr(head,10);
    head=insertr(head,20);
    head=insertr(head,30);
    head=insertr(head,40);
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    cout<<"before deletion";
    printr(head);
    head=deletek(head,k);
    cout<<"after deletion:";
    printr(head);
}