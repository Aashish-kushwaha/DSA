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

int maximum_tree(treenode *root)
{
    if(root==NULL)
    return INT_MIN;
    else
    return max(root->data,max(maximum_tree(root->left),maximum_tree(root->right)));
}

int minimum_tree(treenode *root)
{
    if(root==NULL)
    return INT_MAX;
    else
    return min(root->data,min(minimum_tree(root->left),minimum_tree(root->right)));
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

    cout<<"maximum of tree:"<<maximum_tree(root);
    cout<<"minimum of tree:"<<minimum_tree(root);

    


}