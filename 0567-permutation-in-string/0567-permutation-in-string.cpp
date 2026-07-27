class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;
        int k = s1.size();
        if(s2.size()<s1.size()) return false;
        for(int i = 0; i<s1.size(); i++){
            freq1[s1[i]]++;
            freq2[s2[i]]++;
        }
        
        if(freq1 == freq2){
            return true;
        }
        for(int i = k; i< s2.size(); i++){
            freq2[s2[i]]++;
            freq2[s2[i-k]]--;
            if(freq2[s2[i-k]]==0) freq2.erase(s2[i - k]);
            if(freq1 == freq2){
                return true;
            }
        }
        return false;
    }
};