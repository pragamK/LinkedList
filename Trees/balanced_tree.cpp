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

bool balanced(Node* root){
    if(root==NULL){
        return true;
    }

    if((balanced(root->right)==false) || (balanced(root->left)==false)){
        return false;
    }
    
    int lh=calcHeight(root->left);
    int rh=calcHeight(root->right);
    
    if(abs(lh-rh)>1){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    if(balanced(root)==false){
        cout<<"Not balanced"<<endl;
    }else{
        cout<<"Balanced"<<endl;
    }
    
    struct Node* root2 = new Node(1);
    root2->left=new Node(2);
    root2->right=new Node(3);
    root2->left->left=new Node(4);
    root2->left->left=new Node(5);
    root2->left->left->left=new Node(6);
    if(balanced(root2)==false){
        cout<<"Not balanced";
    }else{
        cout<<"Balanced";
    }
    return 0;
}
