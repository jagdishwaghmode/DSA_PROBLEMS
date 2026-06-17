class Solution {
    int solve(TreeNode* root, int &diameter){
        if(root == NULL){
            return 0;
        }

        int left = solve(root->left, diameter);
        int right = solve(root->right, diameter);

        // update diameter
        diameter = max(diameter, left + right);

        // return height
        return 1 + max(left, right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        solve(root, diameter);
        return diameter;
    }
};