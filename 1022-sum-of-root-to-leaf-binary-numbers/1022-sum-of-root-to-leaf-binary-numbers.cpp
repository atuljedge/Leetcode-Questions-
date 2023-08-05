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
    int helper(TreeNode *root , int sum)
    {
        if(root==NULL)
            return 0;
        
        if(root->left==NULL && root->right==NULL)
        {
           return sum*2+root->val;
        }
        int leftSum=helper(root->left,sum*2+root->val);
        int rightSum=helper(root->right,sum*2+root->val);
        
        return leftSum+rightSum;
    }
    int sumRootToLeaf(TreeNode* root) {
        
        return  helper(root, 0);
    }
};