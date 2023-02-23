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

void enque(node *&f,node *&r,int x)
{
    if(f==NULL)
    {
        f=r=new node(x);
        return;
    }

    r->next=new node(x);
    r=r->next;
}

node *deeque( node *&front)
{
    if(front==NULL)
    return front;

    cout<<"dequed:"<<front->data;
     node* temp=front;
     front=front->next;
     cout<<front->data;
     delete(temp);
     return front;
}

int getfront(node *&f)
{
    return f->data;
}

int main()
{
    node *front=NULL;
    node *rear=NULL;

     enque(front,rear,10);
     enque(front,rear,20);
     enque(front,rear,30);
     enque(front,rear,40);
     enque(front,rear,50);
     enque(front,rear,60);
     node *curr=front;
    cout<<"fornt:"<<getfront(front)<<endl;
       front= deeque(front);
    cout<<"front"<<getfront(front)<<" ";

    



}
