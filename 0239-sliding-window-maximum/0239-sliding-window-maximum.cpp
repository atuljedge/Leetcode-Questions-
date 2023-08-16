class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        
        priority_queue<int>pq;
        unordered_map<int,int>mp;
        
        for(int i=0;i<k;i++)
        {
            pq.push(nums[i]);
            mp[nums[i]]=i;
        }
        
        ans.push_back(pq.top());
        
        int l=1;
        int n=nums.size();
        
        for(int i=k;i<n;i++)
        {
            pq.push(nums[i]);
            mp[nums[i]]=i;
            
            while(mp[pq.top()]<l)
                pq.pop();
            
            ans.push_back(pq.top());
            l++;
        }
      return ans;
    }
};