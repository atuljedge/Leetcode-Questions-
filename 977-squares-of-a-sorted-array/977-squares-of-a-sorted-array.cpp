class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
             int square=nums[i]*nums[i];
            ans.push_back(square); 
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};