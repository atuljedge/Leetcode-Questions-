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
    void helper(TreeNode *head,vector<int>&ans)
    {
        
        
        if(!head)
            return ;
        
        helper(head->left,ans);
        ans.push_back(head->val);
        helper(head->right,ans);
        
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        TreeNode *head=root;
     
        vector<int>ans;
        helper(head,ans);
        return ans;
    }
};