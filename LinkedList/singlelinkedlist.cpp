// implementation of single linked list
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
//DISPLAYING LINKED LIST
void printfunction(node* h)
{
    node *curr=h;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

// using recursive function;
void printrecursive(node *h)
{
    if(h==NULL)
    {
        return ;
    }
    cout<<h->data<<" ";
    printrecursive(h->next);
}


int main()
{
    node *n1=new node(10);
    node *n2=new node(20);
    node *n3=new node(30);
    n1->next=n2;
    n2->next=n3;
    cout<<n1->next<<" ";
    cout<<&n2;
    printfunction(n1);
    cout<<endl;
    printrecursive(n1);
}