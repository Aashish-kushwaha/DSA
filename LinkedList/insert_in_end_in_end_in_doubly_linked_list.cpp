#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
node *insertr(node *h,int x)
{
    node *n=new node(x);
    if(h==NULL)
    {
        return n;
    }
    node *curr=h;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=n;
    n->prev=curr;
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
    printr(head);
    
}