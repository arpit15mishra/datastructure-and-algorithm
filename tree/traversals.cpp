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

void InOrder(struct BinaryTreeNode *root){
    if(root){
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
}

void LevelOrder(struct BinaryTreeNode *root){
    struct BinaryTreeNode *temp;
    queue<struct BinaryTreeNode*> Q;
    if(!root) return;
    Q.push(root);

    while(!Q.empty()){
        temp = Q.front();
        Q.pop();
        cout<<temp->data<<" ";
        if(temp->left) Q.push(temp->left);
        if(temp->right) Q.push(temp->right);
    }
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
    cout<<endl;
    cout<<"In-order traversal of the tree is :";
    InOrder(root);
    cout<<endl;
    cout<<"level order traversal of the tree is :";
    LevelOrder(root);

    return 0;

}

