class Solution {
public:
    int x ;
    TreeNode* solve(vector<int> &a,vector<int> &b,int s,int e){
        if(s>e)return NULL;
        TreeNode* node = new TreeNode(b[x++]);
        int i;
        for(i = s; i<=e; i++){
            if(node->val == a[i]){
                break;
            }
        }
        node->right = solve(a,b,i+1,e);
        node->left = solve(a,b,s,i-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        reverse(postorder.begin(),postorder.end());
        x = 0;
        return solve(inorder,postorder,0,inorder.size()-1);
        
    }
};