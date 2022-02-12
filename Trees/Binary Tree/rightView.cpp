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

void bfs(node *root){
 queue<node *> q;
 q.push(root);

 while(!q.empty()){
     node *f=q.front();
     cout<<f->data<<"   ";
     q.pop();
     if(f->left){
         q.push(f->left);
     }
     if(f->right){
         q.push(f->right);
     }
 }
return;
}



int main(){


cout<<"\nEnter the tree inputs: ";
//{3 4 -1 6 -1 -1 5 1 -1 -1 -1};
node *root=buildTree();


cout<<"\nThis is my tree in Preorder Traversal\n";

return 0;

//{3 4 -1 6 -1 -1 5 1 -1 -1 -1};
// visualizing this tree
    //       3
    //   (       )
    //  4         5
    //    )     (   
    //    6     1
}