class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(char c : s) {
            if(c >= 'A' && c <= 'Z') {
                ans += tolower(c);
            } else {
                ans += c;
            }
        }
        return ans;
    }
};
