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
    void solve(TreeNode* root,int& cnt,int sum, int targetSum){
        if(root==NULL){
            return;
        }
                sum += root->val;

        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                cnt++;
            }
            return;
        }
        
        solve(root->left,cnt,sum,targetSum);
        solve(root->right,cnt,sum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        int cnt = 0;
        int sum = 0;
        solve(root,cnt,sum,targetSum);
        return cnt;
    }
};