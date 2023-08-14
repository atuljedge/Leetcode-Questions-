class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
       int KthLargest=nums[nums.size()-k];
       return KthLargest;
    }
};