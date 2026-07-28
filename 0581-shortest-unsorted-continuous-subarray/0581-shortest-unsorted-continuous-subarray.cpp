class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        int minOut = INT_MAX;
        int maxOut = INT_MIN;

        // Left to right
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                minOut = min(minOut, nums[i]);
            }
        }

        // Right to left
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > nums[i + 1]) {
                maxOut = max(maxOut, nums[i]);
            }
        }

        if (minOut == INT_MAX)
            return 0;

        int left = 0;
        while (nums[left] <= minOut)
            left++;

        int right = n - 1;
        while (nums[right] >= maxOut)
            right--;

        return right - left + 1;
    }
};