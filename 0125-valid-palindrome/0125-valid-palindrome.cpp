class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
        int n = t.size();
        int a, b;
        a = 0;
        b = n - 1;

        while (a < b) {
            if (t[a] == t[b]) {

            } else {
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};