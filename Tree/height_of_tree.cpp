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

//height of tree: idea is to count the number of edge in the tree and return the longest path to leaf node
int height_tree(treenode * root)
{
    if(root==NULL)
    {
        return 0;
    }else{
        return max(height_tree(root->left),height_tree(root->right))+1;
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
    
    int h=height_tree(root);
    cout<<endl;

    cout<<"height of tree:"<<h;
}