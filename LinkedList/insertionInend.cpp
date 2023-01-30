#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
node *insertnew(node *head,int x)
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
    while(head!=NULL)
    {
    cout<<head->data<<" ";
    head=head->next;
    }
}

int main()
{
    node *head=NULL;
    head= insertnew(head,10);
    head= insertnew(head,20);
    head= insertnew(head,30);

    printr(head);

}