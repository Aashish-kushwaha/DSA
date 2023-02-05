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
    printr(head);
}