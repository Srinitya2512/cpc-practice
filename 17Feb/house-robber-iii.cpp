#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
        int val;
        TreeNode *left;
         TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
class Solution {
    public:
        unordered_map<TreeNode*,int> dp;
        int robb(TreeNode* root)
        {
            if(!root)   return 0;
    
            if(dp.count(root))  return dp[root];
    
            int cntthis = root->val,skipthis=0;
    
            if(root->left)
            {
                cntthis += robb(root->left->left) + robb(root->left->right);
            }
            if(root->right)
            {
                cntthis += robb(root->right->left) + robb(root->right->right);
            }
    
            skipthis += robb(root->right)+robb(root->left);
    
            return dp[root] = max(cntthis,skipthis);
        }
        int rob(TreeNode* root) {
           return robb(root);
        }
    };