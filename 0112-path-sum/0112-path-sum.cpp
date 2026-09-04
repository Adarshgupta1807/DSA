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
    bool inorder(TreeNode* root, int & targetSum,int sum){
        if(root==NULL) return false;
        sum=sum+root->val;
        //if we reached leaf node
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum) return true;
            else return false;
        }
        bool leftside=inorder(root->left,targetSum,sum);
        bool rightside=inorder(root->right,targetSum,sum);
        return leftside||rightside;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool result=inorder(root,targetSum,sum);
        return result;
    }
};