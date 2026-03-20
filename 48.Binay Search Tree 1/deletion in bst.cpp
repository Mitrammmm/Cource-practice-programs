// 2️⃣ Deletion in BST
// Cases

// 1️⃣ Node has no child → delete directly
// 2️⃣ Node has one child → replace node with child
// 3️⃣ Node has two children → replace with inorder successor (minimum in right subtree)

#include<iostream>
#include<queue>
#include <vector>
#include<map>
using namespace std;

class TreeNode{
public:    
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){   //constructor
        // this->val = val;
        val = value;
        this->left = NULL;
        this->right =NULL;
    }
};

// Helper Function (find minimum)
TreeNode* findMin(TreeNode* root){
    while(root->left)
        root = root->left;
    return root;
}

// Deletion Code
class Solution {
public:

    TreeNode* findMin(TreeNode* root){
        while(root->left)
            root = root->left;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL) return NULL;

        if(key < root->val)
            root->left = deleteNode(root->left, key);

        else if(key > root->val)
            root->right = deleteNode(root->right, key);

        else{
            // case 1: no child
            if(root->left == NULL && root->right == NULL)
                return NULL;

            // case 2: one child
            if(root->left == NULL)
                return root->right;

            if(root->right == NULL)
                return root->left;

            // case 3: two children
            TreeNode* successor = findMin(root->right);
            root->val = successor->val;
            root->right = deleteNode(root->right, successor->val);
        }

        return root;
    }
};

// Time Complexity O(h)
// Worst case (skewed tree):O(n)

// Space Complexity
// O(h)