class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int idx = -1;
        for(int i = 0; i<word.size();i++){
            ans.push_back(word[i]);
            if(word[i] == ch){
                idx = i;
                break;
            }
        }
        if(idx == -1) return ans;
        reverse(ans.begin(), ans.end());
        for(int i = idx + 1; i< word.size(); i++){
            ans.push_back(word[i]);
        }
        
        return ans;
    }
};