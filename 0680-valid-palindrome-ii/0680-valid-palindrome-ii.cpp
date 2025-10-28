class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                int x = i + 1, y = j;
                while (x < y && s[x] == s[y]) x++, y--;
                if (x >= y) return true;
                x = i, y = j - 1;
                while (x < y && s[x] == s[y]) x++, y--;
                return x >= y;
            }
            i++;
            j--;
        }

        return true;
    }
};
