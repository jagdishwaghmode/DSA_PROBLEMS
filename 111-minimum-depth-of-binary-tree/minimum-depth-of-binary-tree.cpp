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
    
    int miniDepth(TreeNode* root) {
        if(root==NULL){
            return INT_MAX;
        }
        if(root->left==NULL && root->right==NULL) return 1;

        int left =  miniDepth(root->left);
        int right = miniDepth(root->right);

        return min(left, right) + 1;
    }
    int minDepth(TreeNode* root) {
        int depth = miniDepth(root);
        return depth == INT_MAX ? 0 : depth;
    }
};