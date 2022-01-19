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

node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

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

    cout << "\nEnter the tree inputs: ";
    node *root = buildTree();
    cout << "\nThis is my tree in Preorder Traversal\n";
    printPreTree(root);

    if(isHeightBalanced(root)){
        cout<<"\nThe tree is Height Balanced";
    }
    else{
        cout<<"\nThe tree is NOT Height Balanced";
    }

    return 0;

    //{3 4 -1 6 -1 -1 5 1 -1 -1 -1};
    // visualizing this tree
    //       3
    //   (       )
    //  4         5
    //    )     (
    //    6     1
}