#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *right;
    struct Node *left;
    
    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

bool isNull(Node* root){
    if(root!=NULL && root->left==NULL && root->right==NULL){
        return true;
    }
    return false;
}


int sumOfLeftLeaves(Node* root) {
    if(root==NULL){
        return 0;
    }
    
    int s=0;
    
    if(isNull(root->left)){
        s+=root->left->data;
    }
    
    s+=sumOfLeftLeaves(root->right);
    s+=sumOfLeftLeaves(root->left);
    
    return s;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"Sum of left leaves: "<<sumOfLeftLeaves(root);
    
    cout<<endl;

    struct Node* root2 = new Node(1);
    root2->left=new Node(2);
    root2->right=new Node(3);
    root2->left->left=new Node(4);
    root2->left->left->left=new Node(5);
    root2->left->left->left->left=new Node(6);
    cout<<"Sum of left leaves: "<<sumOfLeftLeaves(root2);
    return 0;
}