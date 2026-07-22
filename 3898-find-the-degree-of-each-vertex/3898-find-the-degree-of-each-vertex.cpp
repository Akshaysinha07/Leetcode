class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        for(int i=0; i<n;i++){
            int degree =  0;
            for(int j = 0; j<n;j++){
                if(matrix[i][j] == 1){
                    degree++;
                }
                
            }
            ans.push_back(degree);
            
        }
        return ans;
    }
};