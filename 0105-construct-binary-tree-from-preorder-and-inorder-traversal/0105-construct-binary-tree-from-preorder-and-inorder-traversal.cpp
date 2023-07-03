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
    int search(vector<int> inorder, int elem, int size){
        for(int i=0; i<size; i++){
            if(inorder[i]==elem){
                return i;
            }
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder,vector<int>& inorder, int& size, int prestart, int preend, int& ind){
        if(ind>=size||prestart>preend){
            return NULL;
        }
        int ele=preorder[ind++];
        TreeNode* root=new TreeNode(ele);
        int pos=search(inorder, ele, size);
        root->left=helper(preorder, inorder, size, prestart, pos-1, ind);
        root->right=helper(preorder, inorder, size, pos+1, preend, ind);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prestart=0;
        int size=preorder.size();
        int preend=size-1;
        int ind=0;
        return helper(preorder, inorder,size, prestart, preend, ind);
    }
};