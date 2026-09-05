class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int score = 0;
        vector<int> suffixMin(n);
        suffixMin[n-1] = nums[n - 1];
        for(int i = n -2; i>=0; i--){
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }
        long long preMax = nums[0];
        for(int i=0; i<n; i++){
            preMax = max(preMax, (long long)nums[i]);

            if(preMax - suffixMin[i] <= k){
                return i;
            }
        }
        return -1;
    }
};