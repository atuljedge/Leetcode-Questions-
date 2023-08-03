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
    void helper(vector<int>&diff_vec,TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        
        helper(diff_vec,root->left);
        diff_vec.push_back(root->val);
        helper(diff_vec,root->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
        
        int min_diff=INT_MAX;
        vector<int>diff_vec;
        
        helper(diff_vec,root);
        
        for(int i=1;i<diff_vec.size();i++)
        {
            int dif=diff_vec[i]-diff_vec[i-1];
            min_diff=min(min_diff,dif);
        }
      return min_diff;
    }
};