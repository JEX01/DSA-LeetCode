class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = 0;
        int t = 0;

        for (auto s : words) {

            n = 0;
            t = 1;

            while (n < s.size() / 2) {

                if (s[n] != s[s.size() - n - 1]) {
                    t = 0;
                    break;
                }
                n++;
            }
            if (t == 1) {
                return s;
            }
        }
        return "";
    }
};