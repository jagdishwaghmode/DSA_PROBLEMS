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
    pair<int,int> solve(TreeNode* root, int& ans){
        if(root==NULL){
            return {0,0};
        }
        
        auto l = solve(root->left,ans);
        auto r = solve(root->right,ans);
        
        int sum = root->val + l.first + r.first;
        int count = 1 + l.second + r.second;

        int avg = sum/count;

        if(root->val==avg){
            ans++;
        }

        return {sum,count};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        solve(root,ans);
        return ans;
    }
};