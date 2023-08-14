class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)
            if(x%2==0)
                mp[x]++;
        
        int largest=-1;
        int maxfreq=0;
        for(auto x:mp)
        {
           if(maxfreq<x.second)
           {
               largest=x.first;
               maxfreq=x.second;
           }
        }
        
     return largest;
    }
};