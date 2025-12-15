class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        long long res = 0;

        long long k = 1;
        for (int i = 1; i < n; i++) {
            if (prices[i - 1] - prices[i] == 1)
                k++;
            else {
                res += (k + 1) * k / 2;
                k = 1;
            }
        }
        res += (k + 1) * k / 2;

        return res;
    }
};