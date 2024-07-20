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

// void nthlevelele(Node* root, int level, int curr){          
//     if(root == NULL){
//         curr--;
//         return;
//     }
//     curr++;        
//     if(curr==level) cout<<root->val<<" ";           
//     nthlevelele(root->left, level, curr);           
//     nthlevelele(root->right, level, curr);         
// }

void nthlevelele(Node* root, int level, int curr){          
    if(root == NULL) return;        
    if(curr==level){
        cout<<root->val<<" "; 
        return;
    }          
    nthlevelele(root->left, level, curr + 1);           
    nthlevelele(root->right, level, curr+ 1);         
}

int main(){
    Node* a = new Node(1);  //root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    int level = 2;  
    // nthlevelele(a, level, 0);   // 0 vo starting level bta r
    nthlevelele(a, level, 1);  

}