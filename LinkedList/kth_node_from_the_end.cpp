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

void printr(node *head)
{
    node *c=head;
    while(c!=NULL)
    {
        cout<<c->data<<" ";
        c=c->next;
    }
}

//method 1:in this approach we simply find the length of the linked list and then traverse again till length-k+1 the node.
//time complexity:O(2*n)
int kthnode(node *h,int k)
{
    int l=0;
    node *t=NULL;
    for(t=h;t!=NULL;t=t->next)
    {
        l++;
    }
    node *c=h;

    for(int i=1;i<l-k+1;i++)
    {
        c=c->next;
    }

    return c->data;

}
//method 2:in this approach what we do is that we maintain two pointer called first and second first we put first Kth time ahead of second and then move both one by one.whn first reaches last then second reaches the kth node from the last.

int kthnode(node *h,int k)
{
    node *first=h;
    node *second=h;

    for (int i=0;i<k;i++)
    {
       first=first->next; 
    }
    
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }

    return second->data;
}

int main()
{
    node *head=NULL;
    head=insertr(head,10);
    head=insertr(head,20);
    head=insertr(head,30);
    head=insertr(head,40);
    head=insertr(head,50);
    printr(head);
    int k;
    cin>>k;
    cout<<"kth node:"<<kthnode(head,k);


}