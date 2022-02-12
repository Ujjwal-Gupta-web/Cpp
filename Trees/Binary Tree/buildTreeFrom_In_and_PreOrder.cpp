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

node *createTreeFromIn_and_PreOrder(int *in,int *pre , int start,int end){
    static int i=0;
    if(start>end){
        return NULL;
    }
    
    node *root=new node(pre[i]);
    int index= -1;
    for(int j=start;j<=end;j++){
        if(in[j]==pre[i]){
            index=j;
            break;
        }
    }
    i++;
    root->left=createTreeFromIn_and_PreOrder(in,pre,start,index-1);
    root->right=createTreeFromIn_and_PreOrder(in,pre,index+1,end);

return root;
}

int main(){

int in[]={3,2,8,4,1,6,7,5};
int pre[]={1,2,3,4,8,5,6,7};
int n=sizeof(in)/sizeof(int);

node *root= createTreeFromIn_and_PreOrder(in,pre,0,n-1);

bfs(root);

    return 0;
}