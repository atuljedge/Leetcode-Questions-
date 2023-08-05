class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>sub,vector<int>&nums,int index)
    {
        if(index>=nums.size())
        {
            ans.push_back(sub);
            return;
        }
        
        solve(ans,sub,nums,index+1);
        
        sub.push_back(nums[index]);
        //sub.pop_back();
        
        solve(ans,sub,nums,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        
        vector<int>sub;
        int index=0;
        solve(ans,sub,nums,index);
    
        return ans;
    }
};