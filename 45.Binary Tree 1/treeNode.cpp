#include<iostream>
using namespace std;

class Node{
public:    
    int val;
    Node* left;
    Node* right;
    Node(int value){   //constructor
        // this->val = val;
        val = value;
        this->left = NULL;
        this->right =NULL;
    }
};

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    // cout<<" ";
    displayTree(root->right);
}

// int  sum(Node* root){
//     if(root == NULL) return 0;
//     int leftsum = sum(root->left);
//     int rightsum = sum(root->right);
//     int ans = root->val + leftsum + rightsum;
//     return ans;
// }

int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(Node* root){    //no of nodes
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxvalnode(Node* root){    //no of nodes
    if(root == NULL) return INT_MIN;  //if val are negative so INT_MIN
    return max(root->val, max(maxvalnode(root->left),maxvalnode(root->right)) );
}

int levels(Node* root){    
    if(root == NULL) return 0; 
    return 1 + max(levels(root->left),levels(root->right) );
}

// int height(Node* root){       // not working well
//     return levels(root);
// }

int main(){
    Node* a = new Node(10);  //root
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;

    displayTree(a);
    cout<<"SUM"<<" ";
    cout<<sum(a)<<"\n";
    cout<<"maxvalnode"<<"\n";
    cout<<maxvalnode(a)<<"\n";
    cout<<"levels";
    cout<<levels(a)<<"\n";
    cout<<"size";
    cout<<levels(a)-1<<"\n";
}