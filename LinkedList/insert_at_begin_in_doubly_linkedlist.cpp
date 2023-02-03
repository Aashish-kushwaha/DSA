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
    n->next=h;
    h->prev=n;
    return n;
}

void printr(node *h)
{
    node *temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
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