class Solution {
public:
    string removeOuterParentheses(string s) {
        string r;
        int c = 0;
        for (char x : s) {
            if (x == '(' && c++ > 0) 
            r += x;
            if (x == ')' && --c > 0) 
            r += x;
        }
        return r;
    }
};