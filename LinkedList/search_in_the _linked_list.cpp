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

//search function
int lsearch(node *h,int n)
{
    int pos=1;
    node *curr=h;
    while(curr!=NULL)
    {
        if(curr->data==n)
        {
            return pos;
        }else
        {
            pos++;
            curr=curr->next;
        }
        return -1;
    }
}
int main()
{
    node *head=NULL;
    head=insertr(head,10);
    head=insertr(head,20);
    head=insertr(head,30);
    head=insertr(head,40);
    cout<<"list:";
    printr(head);

    int n;
    cout<<"enter number to search in a list:";
    cin>>n;
    cout<<"found at:"<<lsearch(head,n);

}