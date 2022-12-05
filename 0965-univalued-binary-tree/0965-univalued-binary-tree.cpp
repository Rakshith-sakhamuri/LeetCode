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
    bool isUnivalTree(TreeNode* root){
        return sUnivalTree(root,root->val);
    }
private:
    bool sUnivalTree(TreeNode* root,int x){
        //int x=root->val;
        //if(root==NULL) return NULL;
        bool y=true;
        
        if(root->left!=NULL && root->right!=NULL) y=sUnivalTree(root->left,x) && sUnivalTree(root->right,x);
        if(root->left!=NULL && root->right==NULL) y=sUnivalTree(root->left,x);
        if(root->left==NULL && root->right!=NULL) y=sUnivalTree(root->right,x);
        //cout<<x<<endl;
        if(root->val==x) y=y&true;
        else y=y&false;
        return y;
    }

    
};