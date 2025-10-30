class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int i = 1;
        int t = target[0];
        while (i < target.size()) {
            if (target[i] > target[i - 1]) {
                t += (target[i] - target[i - 1]);
            }
            i++;
        }
        return t;
    }
};