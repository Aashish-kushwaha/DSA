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

node *top=NULL;
int size=0;
void pushp(int x)
{
    node *temp=new node(x);
    temp->next=top;
    top=temp;
    size++;
}

void popp()
{
    if(top==NULL)
    {
        cout<<"empty";
    }
    node *p=top;
    top=top->next;
    delete(p);
}

void printr()
 {
    node *t=top;
    while(t!=NULL)
    {
        cout<<t->data <<" ";
        t=t->next;
    }
}

void topp()
{
    cout<<top->data;
}

int main()
{
    pushp(10);
    pushp(20);
    pushp(30);
    pushp(40);
    pushp(50);
    printr();
    cout<<"after pop:"<<endl;
    popp();
    printr();
    cout<<"top element:";
    topp();
    

}