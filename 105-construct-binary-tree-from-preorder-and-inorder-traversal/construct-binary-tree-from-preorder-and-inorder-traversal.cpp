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
    int findPosition(vector<int> inorder,int ele){
        for(int i = 0; i<inorder.size(); i++){
            if(inorder[i]==ele) return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder,vector<int>& inorder,int& preIndex,int inOrderStart,int inOrderEnd,int n){

        if(preIndex>n||inOrderStart>inOrderEnd){
            return NULL;
        }

        int ele = preorder[preIndex++];
        TreeNode* root = new TreeNode(ele);
        int position = findPosition(inorder,ele); 

        root->left  = solve(preorder,inorder,preIndex,inOrderStart,position-1,n);
        root->right = solve(preorder,inorder,preIndex,position+1,inOrderEnd,n);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int preIndex = 0;
        TreeNode* ans = solve(preorder,inorder,preIndex,0,n-1,n);

        return ans;
    }
};