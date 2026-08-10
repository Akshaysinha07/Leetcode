class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        if(nums[high]>nums[low]) return nums[low];
        while(low<high){
            int mid = low + (high - low)/2;
            if(nums[mid]>nums[high]){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
        return nums[low];
    }
};