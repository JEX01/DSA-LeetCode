class Solution {
public:
    int expand(string s, int low, int high) {
        int count = 0;
        while (low >= 0 && high < s.size() && s[low] == s[high]) {
            count++;
            low--;
            high++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            count += expand(s, i, i);
            count += expand(s, i, i + 1);
        }
        return count;
    }
};