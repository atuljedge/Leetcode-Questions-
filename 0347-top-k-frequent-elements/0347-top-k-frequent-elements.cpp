class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>frequent;
        map<int,int>mp;
        for(auto x:nums)
            mp[x]++;
        
        vector<pair<int,int>>vec;
        
        for(auto x:mp)
        {
            vec.push_back({x.second,x.first});
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        int i=0;
        while(i<k)
        {
            frequent.push_back(vec[i].second);
            i++;
        }
     
      return frequent;     
    }
};