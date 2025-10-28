class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // without stack
        string result1;
        string result2;
        for (auto c : s) {
            if (c != '#') {
                result1.push_back(c);
            } else {
                if (!result1.empty()) {
                    result1.pop_back();
                }
            }
        }

        for (auto c : t) {
            if (c != '#') {
                result2.push_back(c);
            } else {

                if (!result2.empty()) {
                    result2.pop_back();
                }
            }
        }
        return result1 == result2;
    }
};
