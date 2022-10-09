class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        
        int i=0 , j=nums.size()-1;
        while(target!=nums[i]+nums[j])
        {
    
         if(target>nums[i]+nums[j]){ 
            i++; }
        else{ 
            j--; }
        }
        return {i+1 ,j+1};
    }
};