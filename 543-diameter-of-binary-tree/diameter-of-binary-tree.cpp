class Solution {
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int opt1 = diameterOfBinaryTree(root->left);
        int opt2 = diameterOfBinaryTree(root->right);
        int opt3 = height(root->left) + height(root->right);

        return max(opt1, max(opt2, opt3));
    }
};