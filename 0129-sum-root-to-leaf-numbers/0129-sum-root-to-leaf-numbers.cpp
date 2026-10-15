/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return solve(root,0);
    }
    int solve(TreeNode *root,int sum){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return sum*10+root->val;
        int l=solve(root->left,sum*10+root->val);
        int r=solve(root->right,sum*10+root->val);
        return l+r;
    }
};