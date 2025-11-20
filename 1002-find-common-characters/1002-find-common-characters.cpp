class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, 100), cur(26);
        
        for (auto &w : words) {
            fill(cur.begin(), cur.end(), 0);
            for (char c : w) 
                cur[c - 'a']++;
            for (int i = 0; i < 26; i++)
                freq[i] = min(freq[i], cur[i]);
        }

        vector<string> ans;
        for (int i = 0; i < 26; i++)
            for (int k = 0; k < freq[i]; k++)
                ans.push_back(string(1, 'a' + i));
                
        return ans;
    }
};
