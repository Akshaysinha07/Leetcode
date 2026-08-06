class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, int> freq;
        for(int i = 0; i<s.size(); i++){
            freq[s[i]]++;
        }
        return freq.size();
    }
};