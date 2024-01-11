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
    int diff = INT_MIN;
    void dfs(TreeNode* root, int a, int b){
        if(!root) return;
        a = min(a,root->val);
        b = max(b,root->val);
        diff = max(diff,b-a);
        dfs(root->left,a,b);
        dfs(root->right,a,b); 
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val, root->val);
        return diff;
    }
};