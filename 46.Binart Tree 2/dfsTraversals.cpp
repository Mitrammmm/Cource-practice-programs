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

void preorder(Node* root){           // root left right
    if(root == NULL) return;        //base case  
    cout<<root->val<<" ";           // root       work       
    preorder(root->left);           // left       call 1
    preorder(root->right);          //right       call 2 
}

void inorder(Node* root){          // left root  right
    if(root == NULL) return;       //base case  
    inorder(root->left);           // left       call 1
    cout<<root->val<<" ";          // root       work       
    inorder(root->right);          //right       call 2 
}

void postorder(Node* root){          // left right root
    if(root == NULL) return;         //base case  
    postorder(root->left);           // left       call 1
    postorder(root->right);          //right       call 2 
    cout<<root->val<<" ";            // root       work       
}

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

    preorder(a);
    cout<<"\n";
    inorder(a);
    cout<<"\n";
    postorder(a);
    cout<<"\n";
}