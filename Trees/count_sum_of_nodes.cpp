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

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->right)+countNodes(root->left)+1;
}

int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->right)+sumNodes(root->left)+root->data;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<"Count of nodes: "<<countNodes(root)<<endl;
    cout<<"Sum of nodes: "<<sumNodes(root)<<endl;
    return 0;
}
