class Solution {
void inOrder(TreeNode* root,string &ans){
    if(root==NULL) return;
    
    ans += to_string(root->val);
    if(root->left==NULL && root->right==NULL) return;
    
    ans += "(";
    inOrder(root->left,ans);
    ans+= ")";
    
    if(root->right!=NULL){
      ans += "(";
      inOrder(root->right,ans);
      ans += ")";
    }
}
public:
    string tree2str(TreeNode* root) {
        string ans;
        inOrder(root,ans);
        return ans;
    }
};