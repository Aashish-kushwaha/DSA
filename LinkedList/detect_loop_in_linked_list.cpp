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

node *insertr(node*head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        return temp;
    }

    node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
node *makeloop(node *head,int k)
{
    node *temp=head;
    for(int i=1;i<k;i++)
    {
        temp=temp->next;
    }

    node *curr=temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=curr;

    return head;
}
void printr(node *head)
{
    node *c=head;
    while(c!=NULL)
    {
        cout<<c->data<<" ";
        c=c->next;
    }
}


// 
bool detectloop(node *h)
{
    if(h==NULL ||h->next==NULL)
    {
        return false;
    }

    node *slow=h;
    node *fast=h;
    while(fast->next && fast->next->next)  // NULL pointer evaluates to "false in boolean context"
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        return true;
    }
    return false;
}
int main()
{
    node *head=NULL;
    head=insertr(head,10);
    head=insertr(head,20);
    head=insertr(head,30);
    head=insertr(head,40);
    head=insertr(head,50);
    cout<<"before reversing:";
    printr(head);
    int k;
    cout<<"enter positon where you want loop:";
    cin>>k;
    head=makeloop(head,k);
    cout<<"done";
    if(detectloop(head)==true)
    {
        cout<<"loop is present";
    }else{
        cout<<"no loop  is present";
    }
    return 0;
}