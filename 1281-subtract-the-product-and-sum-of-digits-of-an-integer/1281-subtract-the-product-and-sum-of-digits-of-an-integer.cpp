class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod =1;
        int sum =0;
        int ans;
        while(n > 0){
            int temp = n%10;
            n = n/10;
            prod = prod * temp;
            sum += temp;
        }
        ans = prod - sum;
        return ans;
    }
};