#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPartitionsAfterOperations(string s, int k) {
        int n = s.size();
        unordered_map<unsigned long long,int> memo;
        function<int(int,int,int)> dfs = [&](int i, int used, int mask) -> int {
            if (i == n) return 1;
            unsigned long long key = (((unsigned long long)i) << 33) | (((unsigned long long)used) << 32) | (unsigned long long)mask;
            auto it = memo.find(key);
            if (it != memo.end()) return it->second;
            int res = 1;
            int c = s[i] - 'a';
            int nm = mask | (1 << c);
            if (__builtin_popcount((unsigned)nm) <= k)
                res = max(res, dfs(i + 1, used, nm));
            else
                res = max(res, 1 + dfs(i + 1, used, 1 << c));
            if (!used) {
                for (int d = 0; d < 26; ++d) {
                    if (d == c) continue;
                    int nm2 = mask | (1 << d);
                    if (__builtin_popcount((unsigned)nm2) <= k)
                        res = max(res, dfs(i + 1, 1, nm2));
                    else
                        res = max(res, 1 + dfs(i + 1, 1, 1 << d));
                }
            }
            memo[key] = res;
            return res;
        };
        return dfs(0, 0, 0);
    }
};
