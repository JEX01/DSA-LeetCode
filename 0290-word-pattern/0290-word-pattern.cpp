class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp;
        stringstream ss(s);

        while (ss >> temp) {
            words.push_back(temp);
        }

        if (pattern.length() != words.size()) return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < pattern.length(); i++) {
            char ch = pattern[i];
            string word = words[i];

            if (p2w.count(ch)) {
                if (p2w[ch] != word) return false;
            } else {
                if (w2p.count(word)) return false;
                p2w[ch] = word;
                w2p[word] = ch;
            }
        }
        return true;
    }
};
