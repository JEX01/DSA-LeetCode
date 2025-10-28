class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int f = s.size() - 1;
        string str = "AEIOUaeiou";
        while (i < f) {

            while (i < f && str.find(s[i]) == string::npos) {
                i++;
            }

            while (i < f && str.find(s[f]) == string::npos) {
                f--;
            }

            swap(s[i], s[f]);
            i++;
            f--;
        }
        return s;
    }
};
