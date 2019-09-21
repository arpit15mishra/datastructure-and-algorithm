#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

void PreOrder(struct BinaryTreeNode *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

int FindMax(struct BinaryTreeNode *root){
    int left, right,max = INT_MIN;
    if(root!=NULL){
      left = FindMax(root->left);
      right = FindMax(root->right);
      if(left>max) max = left;
      if(right>max) max = right;
      if(root->data>max) max = root->data;

    }
    return max;
}


struct BinaryTreeNode* insert(struct BinaryTreeNode *root,int data){
    queue<struct BinaryTreeNode*> Q;
    struct BinaryTreeNode *temp;
    struct BinaryTreeNode *newNode = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;



    if(root==NULL){
        root = newNode;
        return root;
    }
    Q.push(root);

    while(!Q.empty()){
        temp = Q.front();
        Q.pop();
        if(temp->left) Q.push(temp->left);
        else {
            temp->left = newNode;
            return root;
            }
            if(temp->right) Q.push(temp->right);
            else {
                temp->right = newNode;
                return root;
            }
        }
        return root;

    } 
struct BinaryTreeNode* createNode(int data){
    struct BinaryTreeNode *node = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}
 
int main(){
    struct BinaryTreeNode *root = NULL;
    int a;
    for(int i = 0; i < 10; i++ ){
        cout<<"enter the "<<i+1<<" element:";
        cin>>a;
    root = insert(root,a);
    }
    cout<<"pre- order traversal of the tree is :";
    PreOrder(root);
    cout<<endl<<"the maximum element of the tree is :";
    cout<<FindMax(root);

    return 0;

}

