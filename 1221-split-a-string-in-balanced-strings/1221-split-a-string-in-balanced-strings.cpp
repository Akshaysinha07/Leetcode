class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int rcount =0;
        int lcount = 0;
        for(char c : s){
            if(c == 'R'){
                rcount++;
            }else if(c == 'L'){
                lcount++;
            }
            if(rcount == lcount){
                count++;
            }
        }
        return count;
    }
};