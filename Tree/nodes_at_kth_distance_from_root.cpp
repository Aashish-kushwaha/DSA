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

treenode *insertion(treenode *root,int x)
{
    if(root==NULL)
    {
        root=new treenode(x);
        return root;
    }

    queue<treenode*> q;
    q.push(root);

    while(!q.empty())
    {
        treenode *c=q.front();
        q.pop();

        if(c->left==NULL)
        {
            c->left=new treenode(x);
            return root;
        }else
        {
            q.push(c->left);
        }

        if(c->right==NULL)
        {
            c->right=new treenode(x);
            return root;
        }else
        {
            q.push(c->right);
        }

    }
    return root;
}
void inorder(treenode *root)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void kthnode(treenode *root,int k)
{
    if(root==NULL)
    return;
    if(k==0)
    cout<<root->data<<" ";
    else{
        kthnode(root->left,k-1);
        kthnode(root->right,k-1);
    }
}
int main()
{
    treenode *root=NULL;
    root=insertion(root,10);
    root=insertion(root,12);
    root=insertion(root,30);
    root=insertion(root,40);
    root=insertion(root,50);
    root=insertion(root,16);
    root=insertion(root,6);
    root=insertion(root,26);


    inorder(root);

    cout<<"node k distance from root node:";
    kthnode(root,2);


}