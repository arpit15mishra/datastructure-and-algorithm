#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

void PreOrder(struct BinaryTreeNode *root){
    if(root){
        cout<<root->data;
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

