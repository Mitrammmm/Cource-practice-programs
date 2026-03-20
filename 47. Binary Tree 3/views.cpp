// left & right views are solved in leetcode  (199)



//TOP VIEW  tc nlogn ; sc-> n
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

class Solution {
public:
    vector<int> topView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;

        map<int,int> mp;   // hd -> node value
        queue<pair<TreeNode*,int>> q;

        q.push({root,0});

        while(!q.empty()){
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second;

            if(mp.find(hd) == mp.end())
                mp[hd] = node->val;

            if(node->left)
                q.push({node->left,hd-1});   // hd -1 se map m only top view vli values hee aegi phle, bdme hd-1 samehua t ignore hpngi bki values  

            if(node->right)
                q.push({node->right,hd+1}); //similarly, hd+1 ek br hee map m val add krega joki top view wli hongi
        }

        for(auto it : mp)   // ordered map h  + hd-1 & hd+1,   auto sort krega left->right in top view
            ans.push_back(it.second);           // right -> left k liye hd+1 & hd-1 swap krdo bs !

        return ans;
    }
};



                            //BOTTOM VIEW
//Time Complexity
// O(n log n)
// Visit all nodes → O(n)
// Map operations → log n

// Space Complexity
// O(n)
// Queue + Map.
class Solution {
public:
    vector<int> bottomView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;

        map<int,int> mp;   // hd -> node value
        queue<pair<TreeNode*,int>> q;

        q.push({root,0});

        while(!q.empty()){
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second;

            mp[hd] = node->val;   // overwrite for bottom view

            if(node->left)
                q.push({node->left,hd-1});

            if(node->right)
                q.push({node->right,hd+1});
        }

        for(auto it : mp)  //left->right view dega 
            ans.push_back(it.second); // r->l k liye, HD+1 & HD-1 swap kro coz map ordered hai to khud (-2,-1,0,1,2 --) form k value rkhta h

        return ans;
    }
};