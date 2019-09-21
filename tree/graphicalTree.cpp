#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

vector<int> LevelOrder(struct BinaryTreeNode *root){
    vector<int> S;
    struct BinaryTreeNode *temp;
    queue<struct BinaryTreeNode*> Q;
    if(!root) return S;
    Q.push(root);

    while(!Q.empty()){
        temp = Q.front();
        Q.pop();
        S.push_back(temp->data);
        if(temp->left) Q.push(temp->left);
        if(temp->right) Q.push(temp->right);
    }
    return S;
}
int mid(int max,int level){
    if(level==1) return max/2;
    else return mid(max/2,level-1);  
}

void GraphicalTree(struct BinaryTreeNode* root){
    vector<int> S = LevelOrder(root);
    int max = 50;
    for(int i = 0 ; i < max; i++){
        for(int j = 0; j < S.size();j++){
            for(int k = 0; k < mid(max,S.size())-1;k++){
                cout<<" ";
            }
            cout<<S[j];

        }
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
    GraphicalTree(root);

    return 0;

}

