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

//insert in the beginning
node *insertr(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        temp->next=temp;
    }else
    {
    node *curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp;
    
}
 
void printr(node *h)
{
    if(h==NULL)
    return;

    cout<<h->data<<" ";
    for(node *p=h->next;p!=h;p=p->next)
    {
        cout<<p->data<<" ";
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