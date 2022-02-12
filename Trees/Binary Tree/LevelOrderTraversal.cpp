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

int height(node *root){
    if(root==NULL){
        return 0;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh) +1;
    
}

void printIthLevel(node* root,int i){
    if(root==NULL){
        return;
    }
    
    if(i==1){
        cout<<root->data<<" ";
        return;
    }
    printIthLevel(root->left,i-1);
    printIthLevel(root->right,i-1);

    return;
}

int main(){

cout<<"\nEnter the tree inputs: ";
node *root=buildTree();
cout<<"\nThis is my tree in Preorder Traversal\n";
printPreTree(root);
cout<<"\nThis is my tree in Postorder Traversal\n";

cout<<"height of this tree is : "<<height(root);

cout<<"\nLevel Order traversal \n";
for(int i=1;i<=height(root);i++){
    printIthLevel(root,i);
    cout<<endl;
}

//{3 4 -1 6 -1 -1 5 1 -1 -1 -1};
// visualizing this tree
    //       3
    //   (       )
    //  4         5
    //    )     (   
    //    6     1
}