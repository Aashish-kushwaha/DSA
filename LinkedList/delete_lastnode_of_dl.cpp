#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data=x;
        prev=NULL;
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
node *removedl(node *h)
{
    

    if(h==NULL||h->next==NULL)
    {
        delete h;
        return NULL;
    }

    node *curr=h;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    node *temp=NULL;
    temp=curr->next;
    curr->next=NULL;
    delete temp;;
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
    head=insertr(head,10);
    head=insertr(head,20);
    head=insertr(head,30);
    head=insertr(head,40);
    cout<<"before removing last node:";
    printr(head);
    head=removedl(head);
    cout<<endl;
    printr(head);
}