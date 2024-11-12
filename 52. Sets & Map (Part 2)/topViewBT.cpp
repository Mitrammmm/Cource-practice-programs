#include<iostream>
#include<queue>
#include<unordered_map>
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


void topView(Node* root) {
    if (!root) return; // Edge case if root is null
    
    unordered_map<int, int> m;   //<level,root->val>
    queue<pair<Node*, int>> q;
    
    // Initialize root node with horizontal distance 0
    q.push({root, 0});
    
    while (!q.empty()) {
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();
        
        // Add to map if this level is not already present (first occurrence)
        if (m.find(level) == m.end()) {
            m[level] = temp->val;
        }
        
        // Process the left child
        if (temp->left != NULL) {
            q.push({temp->left, level - 1});
        }
        
        // Process the right child
        if (temp->right != NULL) {
            q.push({temp->right, level + 1});
        }
    }

    int minlevel = INT_MAX;
    int mxlevel = INT_MIN;

    // Find the range of levels to print in order
    for (auto x : m) {
        int level = x.first;
        minlevel = min(level, minlevel);
        mxlevel = max(level, mxlevel);
    }

    // Output top view from minlevel to mxlevel
    for (int i = minlevel; i <= mxlevel; i++) {
        if (m.find(i) != m.end()) {
            cout << m[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = construct(arr, n);

    //levelorder(root);
    cout<<endl;
    topView(root);
}
  