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

node *inserte(node *h,int x)
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
    
    if(h==NULL)
    {
        return NULL;
    }
    
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
    
    return (c->next);
}

void printr(node *h)
{
    cout<<h->data<<" ";
    for(node *p=h->next;p!=h;p=p->next)
    {
        cout<<p->data<<" ";
    }
}

int main()
{
    node *head=NULL;
    head=inserte(head,10);
    head=inserte(head,20);
    head=inserte(head,30);
    head=inserte(head,40);
    cout<<"before deletion:";
    printr(head);
    cout<<"after deletion:";
    head=deleteh(head);
    printr(head);
}