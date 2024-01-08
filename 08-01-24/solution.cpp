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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        while(root){
            if(!root->left){
                if(root->val>=low && root->val<=high)
                    sum += root->val;
                root=root->right;
            } 
            else{
                TreeNode* prev = root->left;
                while(prev->right && prev->right!=root)
                    prev = prev->right;
                if(prev->right == root){
                    prev->right=NULL;
                    if(root->val>=low && root->val<=high)
                        sum += root->val;
                    root = root->right;
                }
                else{
                    prev->right=root;
                    root = root->left;
                }
            }
        }
        return sum;
    }

};