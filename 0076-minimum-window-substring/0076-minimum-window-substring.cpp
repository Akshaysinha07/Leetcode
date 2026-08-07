class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        if(s.size()<t.size()) return "";
        int low = 0;
        int high = 0;
        int req = t.size();
        int len = INT_MAX;
        int start = 0;
        while(low<t.size()){
            freq[t[low]]++;
            low++;
        }
        low = 0;
        while(high<s.size()){
            if(freq[s[high]]>0){
                req--;
            }
            freq[s[high]]--;
            while(req ==0){
                if(high - low + 1<len){
                    len = high - low + 1;
                    start = low;
                }
                freq[s[low]]++;
                if(freq[s[low]]>0) req++;
                low++;
                
            }
            high++;
        }
        if(len == INT_MAX) return "";

        return s.substr(start, len);
    }
};