#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node (int x)
    {
        data=x;
        next=NULL;
    }
};
node *insertr(node *h,int x)
{
    node *temp=new node(x);
    if(h==NULL)
    {
        return temp;
    }
    node *curr=h;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return h;
}

void printr(node *h)
{
    node *c=h;
    while(c!=NULL)
    {
        cout<<c->data<<" ";
        c=c->next;
    }
}
//method 1:we first count the number of node in the linked list
//then we traverse half of it to reach the middle node 
//time complexity=O(2*n) as we have to traverse through linked list 2 times.
int middle(node *h)
{
    if(h==NULL)
    {
        return 0;
    }
    int c=0;
    node *curr=NULL;
    for(curr=h;curr!=NULL;curr=curr->next)
    {
        c++;
    }

    curr=h;
    for(int i=0;i<c/2;i++)
    {
        curr=curr->next;
    }
    return curr->data;

}
//method 2:this method work on two pointer/references in approach, here we have two pointer called slow and fast slow move 1 at a time and fast move 2 at a time so when the fast reaches the last node , slow reaches the middle node. this approach is better in terms of time complexity as we have just need to traverse just once

int middle(node *h)
{
    if(h==NULL)
    {
        return 0;
    }

    node *slow=h;
    node *fast=h;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
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
    cout<<endl;
    cout<<"middle of the linked list:"<<middle(head);
    
}