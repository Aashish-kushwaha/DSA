#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;

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
    temp->prev=c;
    return h;
}
void printr(node *h)
{
    node *n=h;
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
node  *reversedl(node *h)
{
     if(h==NULL||h->next==NULL)
     {
        return h;
     }

     node *pre=NULL;
     node *curr=h;
     while(curr!=NULL)
     {
        pre=curr->prev;
        curr->prev=curr->next;
        curr->next=pre;
        curr=curr->prev;

     }
     return pre->prev;
}

int main()
{
    node *h=NULL;
    h=insertr(h,10);
    h=insertr(h,20);
    h=insertr(h,30);
    h=insertr(h,40);
    cout<<"before reverse:";
    printr(h);
    cout<<endl;
    h=reversedl(h);
    cout<<"after reverse:";
    printr(h);
}