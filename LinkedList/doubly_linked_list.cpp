#include<bits/stdc++.h>
using namespace std;

struct node
{
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
    node *n1=new node(10);
    node *n2=new node(20);
    node *n3=new node(30);

    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;

    printr(n1);
}