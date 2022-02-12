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


bool search(Node *root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(data>root->data){
        return search(root->right,data);
    }
    else{
        return search(root->left,data);
    }
}

void bfs(Node *root){
 queue<Node *> q;
 q.push(root);

 while(!q.empty()){
     Node *f=q.front();
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

void inOrder(Node *root){
if(root==NULL){
    return;
}
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
return;
}

int main(){

Node *root=build();
cout<<"\nBFS\n";
bfs(root);
cout<<"\nInorder\n";
inOrder(root);
if(search(root,25)){
    cout<<"\nYES - Found";
}
else{
    cout<<"\nNOT Found";
}
return 0; 
}