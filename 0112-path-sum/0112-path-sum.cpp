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
    bool helper(TreeNode* root, int Sum){
        if(!root){
            return false;
        }
        Sum-=root->val;
        if(root->left==NULL&&root->right==NULL&& !Sum){
            return true;
        }
        return helper(root->right,Sum) or helper(root->left,Sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        return helper(root,targetSum);
    }
};