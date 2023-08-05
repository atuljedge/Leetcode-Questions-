class Solution {
public:
    void backTracking(map<char,string>digittochar,vector<string>&ans,string digits,int i,string curstr )
    {
        
        if(curstr.size()==digits.size())
        {
            ans.push_back(curstr);
            return ;
        }
        
        for(auto ch:digittochar[digits[i]])
        {
            backTracking(digittochar,ans,digits,i+1, curstr + ch);
        }
    }
  
        vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        
        map<char,string>digittochar=
        {
            {'2', "abc"},
            
            {'3', "def"},
            
            {'4', "ghi"},
            
            {'5', "jkl"},
            
            {'6', "mno"},
            
            {'7', "pqrs"},
            
            {'8', "tuv"},
            
            {'9', "wxyz"}
        };
        
        if(digits.size())
        {
            backTracking(digittochar,ans,digits,0,"");
            
        }
      return ans;
    }
};