class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> freq;
        int low = 0;
        int high = 0;
        for (int i = 0; i < p.size(); i++) {
            freq[p[i]]++;
        }
        while (high < s.size()) {
            freq[s[high]]--;
            while (freq[s[high]] < 0) {
                freq[s[low]]++;
                low++;
            }
            if (high - low + 1 == p.size()) {
                ans.push_back(low);
                freq[s[low]]++;
                low++;
            }
            high++;
        }

        return ans;
    }
};