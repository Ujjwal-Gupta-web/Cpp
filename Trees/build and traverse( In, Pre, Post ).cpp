#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;	
	node *left;
	node *right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node *root=new node(d);
    root->left=buildTree();
    root->right=buildTree();

    return root;
}

void printPreTree(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreTree(root->left);
    printPreTree(root->right);
}

void printPostTree(node *root){
    if(root==NULL){
        return;
    }
    printPostTree(root->left);
    printPostTree(root->right);
    cout<<root->data<<" ";
}

void printInTree(node *root){
    if(root==NULL){
        return;
    }
    printInTree(root->left);
    cout<<root->data<<" ";
    printInTree(root->right);
}

void printLevelsTree(node *root){
    if(root==NULL){
        return;
    }
    printInTree(root->left);
    cout<<root->data<<" ";
    printInTree(root->right);
}

int main(){


cout<<"\nEnter the tree inputs: ";
node *root=buildTree();
cout<<"\nThis is my tree in Preorder Traversal\n";
printPreTree(root);
cout<<"\nThis is my tree in Postorder Traversal\n";
printPostTree(root);
cout<<"\nThis is my tree in Inorder Traversal\n";
printInTree(root);
return 0;

//{3 4 -1 6 -1 -1 5 1 -1 -1 -1};
// visualizing this tree
    //       3
    //   (       )
    //  4         5
    //    )     (   
    //    6     1
}