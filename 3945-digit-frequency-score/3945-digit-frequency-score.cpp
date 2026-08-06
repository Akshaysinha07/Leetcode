class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        int temp = n;
        int score = 0;
        while(temp>0){
            int a =temp%10;
            freq[a]++;
            temp = temp/10;
        }
        for(auto i : freq){
            score += i.first*i.second;
        }
        return score;
        
    }
};