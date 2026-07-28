class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = 0;
        long prod = 1;
        int res = 0;
        if(k<=1) return 0;
        while(high<n){
            prod = prod*nums[high];
            while(prod>=k){
                prod = prod/nums[low];
                low++;
            }
            res += high - low + 1;
            high++;
        }
        return res;

        
        
    }
};