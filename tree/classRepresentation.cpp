#include<bits/stdc++.h>
using namespace std;

class node{
    int data;
    node *left;
    node *right;

    public:

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    int getdata(){
        return data;
    }
    node* getLeftAddress(){
        return left;
    }
    node* getRightAddress(){
        return right;
    }
    void setData(int data){
        this->data = data;
    }

    void setLeftAddress(node* left){
        this->left= left;
    }
    void setRightAddress(node* right){
        this->right = right;
    }

};

class tree{
    node *root;
    
    void preorderTraversal(node *temp){
        if(temp==NULL) return;
        preorderTraversal(temp->getLeftAddress());
        cout<<temp->getdata();
        preorderTraversal(temp->getRightAddress());

    }
    public:
    tree(){
        root=NULL;
    }

    void insert(int data){
        node n(data);
        queue<node*> Q;
        node *temp;
        if(!root) {root=&n;
        cout<<"enter";
        return;}
        Q.push(root);
        while(!Q.empty()){
            temp = Q.front();
            Q.pop();
            if(temp->getLeftAddress()!=NULL) {Q.push(temp->getLeftAddress());
                                              cout<<"i am executed";}
            else {temp->setLeftAddress(&n);
            cout<<"element added to left\n";
            cout<<temp->getLeftAddress()->getdata();
                  return;}
            if(temp->getRightAddress()!=NULL) Q.push(temp->getRightAddress());
            else {
                temp->setRightAddress(&n);
                cout<<"element added to right\n";
                return;
            }
        }
    }
    void preorder(){
        preorderTraversal(root);
    }



};

int main(){
    tree t;
    int a;
    for(int i = 0 ; i < 10; i++){
        cout<<"enter the "<<i+1<<"th element: ";
        cin>>a;
        t.insert(a);
    }

    t.preorder();

    return 0;
}