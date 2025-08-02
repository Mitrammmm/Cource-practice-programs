#include<iostream>
#include<queue>
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

void nthlevelele(Node* root, int level, int curr){          
    if(root == NULL) return;        
    if(curr==level){
        cout<<root->val<<" "; 
        return;
    }          
    nthlevelele(root->left, level, curr + 1);           
    nthlevelele(root->right, level, curr+ 1);         
}

int levels(Node* root){    
    if(root == NULL) return 0; 
    return 1 + max(levels(root->left),levels(root->right) );
}

void levelorder(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthlevelele(root, i, 1); 
        cout<<"\n";          
    }
}

void nthlevelReverse(Node* root, int level, int curr){          
    if(root == NULL) return;        
    if(curr==level){
        cout<<root->val<<" "; 
        return;
    }          
    nthlevelReverse(root->right, level, curr+ 1);  //right  
    nthlevelReverse(root->left, level, curr + 1);  //left          
}

void levelorderReverse(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthlevelReverse(root, i, 1); 
        cout<<"\n";          
    }
}

void levelorderQueue(Node* root){      //**** BFS *****
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";

        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<"\n";
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

    //level order traversal
    // nthlevelele(a, 1, 1);
    // cout<<"\n";
    // nthlevelele(a, 2, 1);
    // cout<<"\n";
    // nthlevelele(a, 3, 1);
    // cout<<"\n";

    // levelorder(a);
    // cout<<"\n";
    // levelorderReverse(a);

    //using queue {bfs}
    levelorderQueue(a);
}
  