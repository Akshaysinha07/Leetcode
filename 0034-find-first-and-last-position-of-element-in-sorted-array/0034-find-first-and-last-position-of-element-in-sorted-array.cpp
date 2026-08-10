class Solution {
public:
    // int lowerbound(vector<int>& nums,int low, int high,int target){
    //     int ans = nums.size();
    //     while(low<=high){
    //         int mid = low + (high - low)/2;
    //         if(nums[mid]>=target){
    //             ans = mid;
    //             high = mid -1;
    //         }else{
    //             low = mid + 1;
    //         }
    //     }
    //     return ans;
    // }
    // int upperbound(vector<int>& nums,int low, int high,int target){
    //     int ans = nums.size();
    //     while(low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if(nums[mid] > ) {
    //             ans = mid;
    //             high = mid - 1;
    //         }
    //         else {
    //             low = mid + 1;
    //         }
    //     }

    //     return ans;
    // }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int low = 0;
        int high = nums.size() -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
               first = mid;
               high = mid - 1;
            }else if(nums[mid]<target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        low = 0;
        high = nums.size() -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
               last = mid;
               low = mid + 1;
            }else if(nums[mid]<target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return {first, last};
    }
};