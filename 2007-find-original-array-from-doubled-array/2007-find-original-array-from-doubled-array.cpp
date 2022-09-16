class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0)
            return {};
        vector<int>ans;  int n=changed.size(); 
        sort(changed.begin(),changed.end());
        map<int,int>m;
        for(auto val:changed)
            m[val]++;
        for(int i=0;i<changed.size();i++)
        {
            if(m[changed[i]]==0) continue;
            if(m[changed[i]*2]==0)return {};
            ans.push_back(changed[i]);
            m[changed[i]]--;
            m[changed[i]*2]--;
            
        }
        return ans;
    }
};

