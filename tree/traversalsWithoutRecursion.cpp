#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};

void PreOrder(struct BinaryTreeNode *root){
    stack<struct BinaryTreeNode*> st;
    st.push(root);
    struct BinaryTreeNode *temp;
    while(1){
    while(temp){
        temp = st.top();
        cout<<temp->data;
        st.pop();
        if(temp->left) st.push(temp->left);

    }if(st.empty()) break;
    temp = st.top();
    st.pop();
    root = root->right;
    }
}

void InOrder(struct BinaryTreeNode *root){
    stack<struct BinaryTreeNode*> S;
    while(1){
        while(root){
            S.push(root);
            root = root->left;
        }
        if(!S.empty()) break;
        root = S.top();
        S.pop();
        cout<<root->data;
        root = root->right;
    }
}

void PostOrder(struct BinaryTreeNode *root){
    stack<struct BinaryTreeNode*> S;
    struct BinaryTreeNode *previous = NULL;

    do{
        while(root!=NULL){
            S.push(root);
            root = root->left;
        }
        while(root==NULL&&!S.empty()){
            root = S.top();
            if(root->right == NULL|| root->right == previous){
                cout<<root->data;
                S.pop();
                previous = root;
                root = NULL;
            }else root = root->right;
        }
    }while(!S.empty());
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

