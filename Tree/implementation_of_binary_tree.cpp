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

void preorder(treenode *root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    inorder(root->left);

    inorder(root->right);
}

void postorder(treenode *root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    
    inorder(root->right);
    cout<<root->data<<" ";
}


void levelorder(treenode *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<treenode*> q;
    q.push(root);
    while(!q.empty())
    {
        treenode *c=q.front();
        cout<<c->data<<" ";
        q.pop();

        if(c->left!=NULL)
        q.push(c->left);

        
        if(c->right!=NULL)
        q.push(c->right);
    }
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
    cout<<endl;
    cout<<"preorder:";
    preorder(root);
    cout<<endl;
    cout<<"postorder:";
    postorder(root);
    cout<<endl;

    cout<<"levelorder traversal:";
    levelorder(root);
}