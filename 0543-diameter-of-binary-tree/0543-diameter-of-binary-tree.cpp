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
    /*int height(TreeNode* root){
        if(root==NULL) return 0;

        int left_h = height(root->left);
        int right_h = height(root->right);

        return max(left_h,right_h) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;

        int left_dia = diameterOfBinaryTree(root->left);
        int right_dia = diameterOfBinaryTree(root->right);
        int curr_dia = height(root->left) + height(root->right);

        return max(curr_dia, max(left_dia,right_dia));
    }*/

    int ans=0;

    int height(TreeNode* root) {
        if (root == NULL) return 0;

        int left_h = height(root->left);
        int right_h = height(root->right);

        ans = max(ans, left_h + right_h);

        return 1 + max(left_h, right_h);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }

};