#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;	
	Node *left;
	Node *right;

    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

Node *insertInBST(Node *root, int data){
    if(root==NULL){
        return new Node(data);
    }
    if(data<root->data){
        root->left=insertInBST(root->left,data);
    }
    else{
        root->right=insertInBST(root->right,data);
    }
    return root;
}

Node * build(){
    int d;
    cin>>d;

Node *root=NULL;

    while(d!=-1){
        root=insertInBST(root,d); 
        cin>>d;
    }
return root;
}


void inOrder(Node *root){
if(root==NULL){
    return;
}
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
return;
}

Node *deleteInBST(Node *root,int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left= deleteInBST(root->left,data);
        return root;
    }
    else if(data>root->data){
        root->right= deleteInBST(root->right,data);
        return root;
    }
    else {
        // Node with 0 children
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }

        // Node with 1 children
        
            if(root->left!=NULL and root->right==NULL){
                Node *temp=root->left;
                delete root;
                return temp;
            }
            if(root->right!=NULL and root->left==NULL){
                Node *temp=root->right;
                delete root;
                return temp;
            }
        

    // Node with 2 children
    
        // we will be finding the min from right sub tree (finding min inorder succesor)
        Node *replace=root->right;
        while (replace->left)
        {
            replace=replace->left;
        }

        
        root->data=replace->data;

        // we used delete in BST here because the replacement node be root to tree with only right part
        // root->right will start pointing to updated tree in which replacement data node is not present
        root->right=deleteInBST(root->right,replace->data);
        return root;
    

    }
}

int main(){

Node *root=build();

cout<<"\nInorder\n";
inOrder(root);
deleteInBST(root,50);
cout<<"\nInorder After deletion\n";
inOrder(root);


return 0; 
}