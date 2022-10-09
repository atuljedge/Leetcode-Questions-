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
     bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        vector<int>ans;
        solve(ans , root);
        return findtarget(ans, k);
    }
    
    void solve(vector<int>&ans , TreeNode* root ){
             
        if(root!=NULL)
        {
           solve( ans ,root->left);
            ans.push_back(root->val);
            solve(ans ,root->right);
        }
      
    }
    bool findtarget(vector<int>&ans , int k)
    {
         for(int i=0 , j=ans.size()-1  ; i<j;)
         {
             int sum=ans[i]+ans[j];
             if(sum==k)
                 return true;
             else if(sum<k)
                 i++;
             else
                 j--;
         }
         return false;
    }
   
    
   
};