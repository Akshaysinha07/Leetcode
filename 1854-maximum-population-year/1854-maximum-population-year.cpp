class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> diff(101, 0);

        for (auto &log : logs) {
            diff[log[0] - 1950]++;
            diff[log[1] - 1950]--; 
        }

        int curr = 0;
        int maxPop = 0;
        int ans = 1950;

        for (int i = 0; i <= 100; i++) {
            curr += diff[i];

            if (curr > maxPop) {
                maxPop = curr;
                ans = 1950 + i;
            }
        }

        return ans;
    }
};