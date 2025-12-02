class Solution {
public:
    static const long long MOD = 1e9 + 7;

    long long C2(long long x) {
        return (x * (x - 1) / 2) % MOD;
    }

    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<long long, long long> freq;

        for (auto &p : points) {
            freq[p[1]]++;
        }

        vector<long long> segments;
        for (auto &it : freq) {
            if (it.second >= 2) {
                segments.push_back(C2(it.second));
            }
        }

        long long ans = 0;
        long long suffixSum = 0;

        for (int i = segments.size() - 1; i >= 0; i--) {
            ans = (ans + segments[i] * suffixSum) % MOD;
            suffixSum = (suffixSum + segments[i]) % MOD;
        }

        return ans;
    }
};
