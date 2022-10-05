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

int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    
    return max(lheight,rheight)+1;
}

int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    int currDiameter = lheight+rheight+1;

    int ldiameter = calcDiameter(root->left);
    int rdiameter = calcDiameter(root->right);

    return max(max(ldiameter,rdiameter),currDiameter);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    root->right->right->right->right = new Node(9);
    
    cout<<"Diameter of tree: "<<calcDiameter(root);
    return 0;
}
