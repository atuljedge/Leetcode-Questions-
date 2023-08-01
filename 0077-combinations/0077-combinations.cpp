class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>subsets;
        vector<int>current;
        generateSubsets(1,n,current,subsets,k);
            
       return subsets;
    }
    
    void generateSubsets(int start,int n,vector<int>&current,vector<vector<int>>&subsets,int k){
        
        if(current.size()==k)
        {
            subsets.push_back(current);
            return;
        }
        
        for(int i=start;i<=n;i++)
        {
            current.push_back(i);
            generateSubsets(i+1,n,current,subsets,k);
            current.pop_back();
        }
    }
};