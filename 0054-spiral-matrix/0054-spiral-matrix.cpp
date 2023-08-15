class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int s = 0;
        int e = r - 1;
        int l = 0;
        int ri = c - 1;
        vector<int> result;
        
        if (matrix.empty() || matrix[0].empty()) {
            return result;
        }
        
        while (s <= e && l <= ri) {
            // Printing the first row
            for (int i = l; i <= ri; i++) {
                result.push_back(matrix[s][i]);
            }
            s++;
            
            // Printing the last column
            for (int i = s; i <= e; i++) {
                result.push_back(matrix[i][ri]);
            }
            ri--;
            
            // Printing the last row in reverse
            if (s <= e) {
                for (int i = ri; i >= l; i--) {
                    result.push_back(matrix[e][i]);
                }
                e--;
            }
            
            // Printing the first column in reverse
            if (l <= ri) {
                for (int i = e; i >= s; i--) {
                    result.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        
        return result;
    }
};