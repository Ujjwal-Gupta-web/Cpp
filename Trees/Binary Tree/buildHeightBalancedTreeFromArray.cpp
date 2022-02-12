#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

node *buildHeightBalancedTree(int *arr,int start, int end)
{
    if(start>end){
        return NULL;
    }

    int mid=(start+end)/2;
    node *root=new node(arr[mid]);
    root->left=buildHeightBalancedTree(arr,start,mid-1);
    root->right=buildHeightBalancedTree(arr,mid+1,end);

    return root;
}

void printPreTree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPreTree(root->left);
    printPreTree(root->right);
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

bool isHeightBalanced(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool left = isHeightBalanced(root->left);
    bool right = isHeightBalanced(root->right);
    if ((abs(height(root->left) - height(root->right)) <= 1) and left and right)
    {
        return true;
    }
    return false;
}



int main()
{

    int arr[]={1,2,3,4,5,6,66,77,876,876,8,769,76};
    int size=sizeof(arr)/sizeof(int);

    node *root = buildHeightBalancedTree(arr,0,size-1);

    cout << "\nThis is my tree in Preorder Traversal\n";
    printPreTree(root);
  
    if(isHeightBalanced(root)){
        cout<<"\nThe tree is Height Balanced";
    }
    else{
        cout<<"\nThe tree is NOT Height Balanced";
    }

    return 0;
}