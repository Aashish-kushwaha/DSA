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

void printr(node *h)
{
    if(h==NULL)
    {
        return;
    }
    cout<<h->data<<" ";
    for(node *p=h->next;p!=h;p=p->next)
    {
        cout<<p->data<<" ";
    }
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    printr(head);
}