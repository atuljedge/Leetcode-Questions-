class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        if(arr.size()==0)
            return {};
        vector<int>copy=arr;
        sort(copy.begin(),copy.end());
        
        unordered_map<int,int>m;
        
        int c=1;
        
        m[copy[0]]=c;
        
        for(int i=1;i<copy.size();i++)
        {
            if(copy[i]==copy[i-1])
            {
               m[copy[i]]=c; 
            }
            else
            {
                c++;
                m[copy[i]]=c;
            }
        }
        
        vector<int>ans;
        for(int i=0;i<copy.size();i++)
        {
            ans.push_back(m[arr[i]]);
        }
        return ans;
    }
};