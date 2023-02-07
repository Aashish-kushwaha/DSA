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

//method 1:here first we store the element of linked list in vector and then put it back in reverse order in linked list
// node *reversel(node *head)
// {
//     vector<int> rev;
//     for(node *c=head;c!=NULL;c=c->next)
//     {
//         rev.push_back(c->data);
//     }
//     node *t=NULL;
//     for(node *t=head;t!=NULL;t=t->next)
//     {
//         t->data=rev.back();
//         rev.pop_back();
//     }
//     return head;
// }

//method 2:here we maintain three pointer previous, current, next node to make the changes if we do not make next pointer we will brake the link 
node *reversel(node *h)
{
    node *p=NULL;
    node *c=h;
    node *n=NULL;

    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;        
    }
    return p;
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
    cout<<endl;
    cout<<"after reversing:";
    head=reversel(head);
    printr(head);
    return 0;
}