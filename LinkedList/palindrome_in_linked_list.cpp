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
node *insertr(node *h,int x)
{
    node *temp=new node(x);
    if(h==NULL)
    {
        return temp;
    }

    node *c=h;
    while(c->next!=NULL)
    {
        c=c->next;
    }
    c->next=temp;
    return h;
}

void printr(node *h)
{
    node *t;
    t=h;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

void palindrome(node *h)
{
    stack<int> s;
    node *c=h;
    while(c!=NULL)
    {
        s.push(c->data);
        c=c->next;
    }

    c=h;
    int f=0;
    while(c!=NULL)
    {
       
        if(c->data!=s.top())
        {
            f=1;
            break;
        }
        c=c->next;
        s.pop();
    }

    if(f==0)
    {
        cout<<"palindrome";
    }else if(f==1)
    {
        cout<<"not a palindrome";
    }

}
int main()
{
    node *head=NULL;
    head=insertr(head,1);
    head=insertr(head,2);
    head=insertr(head,3);

    cout<<"before:";
    printr(head);
    cout<<endl;
    palindrome(head);



}