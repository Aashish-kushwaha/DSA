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
    while(h!=NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}
node *insertnew(node *h,int x)
{
    node *n=new node(x);
    n->next=h;
    return n;
}

int main()
{
    /* node *n1=new node(10);
    node *n2=new node(20);
    node *n3=new node(30);
    n1->next=n2;
    n2->next=n3;
    cout<<"before insertion:";
    printr(n1);
    node *head=insertnew(n1,40);
    cout<<"after insertion:";
    printr(head); */

    node *head=NULL;
    head=insertnew(head,10);
    head=insertnew(head,20);
    printr(head);


}