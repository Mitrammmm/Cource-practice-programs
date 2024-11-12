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

Node* construct(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);                    //dont forget apn phle assign t krege n first ele k 

    int i = 1,j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j] != INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}

void leftBoundary(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)) return;

    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}

void bottomBoundary(Node* root){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)) return;

    // cout<<root->val<<" ";     // we dont want from top t bottom
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";       //from bottom to top {recursion, work after call}
}

void boundary(Node* root){
    leftBoundary(root);
    // cout<<"\n";
    bottomBoundary(root);
    // cout<<"\n";
    rightBoundary(root->right);
}

int main(){
    int arr[] = {1,2,3,4,5,6,INT_MIN,7,INT_MIN,INT_MIN,8,9,INT_MIN,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = construct(arr, n);

    //boundary level traversal
    // leftBoundary(root);
    // cout<<"\n";
    // bottomBoundary(root);
    // cout<<"\n";
    // rightBoundary(root->right);

    boundary(root);

}
  