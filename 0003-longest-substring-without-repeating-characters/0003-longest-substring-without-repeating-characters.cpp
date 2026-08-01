class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int res = 0;
        int low = 0;
        for(int high = 0; high<s.size(); high++){
            freq[s[high]]++;
            while(freq[s[high]]>=2){
                freq[s[low]]--;
                if(freq[s[low]]==0){
                    freq.erase(s[low]);
                }
                low++;
            }
            int len = high - low + 1;
            res = max(res, len);

        }
        return res;
    }
};