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
    void solve(TreeNode* root,vector<int> ans,int targetSum,int sum,vector<vector<int>>& res){
        if(root==NULL){
            return;
        }
        sum+=root->val;
        ans.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            if(sum==targetSum){
                res.push_back(ans);
            }
        }
        solve(root->left,ans,targetSum,sum,res);
        solve(root->right,ans,targetSum,sum,res);
        ans.pop_back();
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> ans;
        int sum = 0;
        solve(root,ans,targetSum,sum,res);
        return res;
    }
};