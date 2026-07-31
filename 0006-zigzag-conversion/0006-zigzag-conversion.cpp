class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows ==1||numRows>=s.size()) return s;
        vector<string> ans(numRows);
        int curr = 0;
        bool down = true;
        for(char c : s){
            ans[curr] += c;
            if(curr == 0) down = true;
            if(curr == numRows -1){
                down = false;
            }
            if(down == true){
                curr++;
            }
            if(down == false){
                curr--;
            }
        }
        string res;
        for(string c : ans){
            res += c;
        }
        return res;

    }
};