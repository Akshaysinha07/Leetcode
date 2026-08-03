class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(nums[i]<nums[nums.size()-1]){
            if(nums[i]+1!=nums[i +1]){
                ans.push_back(nums[i] + 1);
                nums[i]++;
            }else{
                i++;
            }
        }
        return ans;
    }
};