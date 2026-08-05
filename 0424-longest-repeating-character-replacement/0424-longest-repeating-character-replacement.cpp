class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int low = 0;
        int res = INT_MIN;
        int maxcount = 0;
        for(int high = 0; high<s.size(); high++){
            freq[s[high] - 'A']++;
            int len = high - low + 1;
            maxcount = max(maxcount, freq[s[high] - 65]);
            int diff = len - maxcount;
            while(diff>k){
                freq[s[low] - 'A']--;
                low++;
                len = high - low + 1;
                diff = len - maxcount;
            }
            if(diff<=k){
                len = high - low + 1;
                res = max(len, res);
            }
        }
        return res;
    }
};