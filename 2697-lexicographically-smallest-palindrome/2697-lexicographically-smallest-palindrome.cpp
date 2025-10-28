class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int a = 0;
        while (a < s.size() - 1 - a) {

        s[a] = s[ s.size() - 1 - a ] = min( s[a], s[s.size() - 1 - a] );
        
        ++a; 
        
        }
        return s;
    }
};