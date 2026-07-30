class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans;
        for(int i = 0; i<k;i++){
            ans.push_back(s[i]);
        }
        reverse(ans.begin(), ans.end());
        for(int i = k; i<s.size();i++){
            ans.push_back(s[i]);
        }
        return ans;
    }
};