#include<bits/stdc++.h>
using namespace std;

struct treenode{
    int data;
    treenode *left;
    treenode *right;

    treenode(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};


treenode *insertion(treenode *root,int n)
{
   if(root==NULL)
   {
    root=new treenode(n);
    return root;
   }

   queue<treenode*> q;
   q.push(root);
   while(!q.empty())
   {
    treenode *curr=q.front();
    q.pop();

    if(curr->left==NULL){
    curr->left=new treenode(n);
    return root;
    }else{
        q.push(curr->left);

    }

    if(curr->right==NULL)
    {
        curr->right=new treenode(n);
        return root;
    }else{
        q.push(curr->right);
    }

   }
   return root;
}
void inorder(treenode *root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//
int maxlevel=0;
void printleft(treenode *r,int level)
{
    if(r==NULL)
    return ;
    if(maxlevel<level)
    {
        cout<<r->data<<" ";
        maxlevel=level;
    }

    printleft(r->left,level+1);
    printleft(r->right,level+1);
}
void leftview( treenode *root)
{
    printleft(root, 1);     //passing level
}
int main()
{
    treenode *root=NULL;
   root= insertion(root,2);
   root= insertion(root,7);
   root= insertion(root,56);
   root= insertion(root,6);
    root=insertion(root,5);
    root=insertion(root,4);
    root=insertion(root,3);
    cout<<"inorder:";
    inorder(root);
    cout<<"left view";
    leftview(root);
    


}