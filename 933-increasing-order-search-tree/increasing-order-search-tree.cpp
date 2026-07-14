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
    private:
    void inorder(TreeNode* root,vector<int>& Inorder){
        if(root==NULL){
            return;
        }
        inorder(root->left,Inorder);
        Inorder.push_back(root->val);
        inorder(root->right,Inorder);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> Inorder;
        inorder(root,Inorder);
        TreeNode* ans = new TreeNode(Inorder[0]);
        int n = Inorder.size();
        int j = 1;
        TreeNode* temp = ans;
        while(j<n){
            temp->right = new TreeNode(Inorder[j]);
            temp = temp->right;
            j++;
        }
        return ans;
    }
};