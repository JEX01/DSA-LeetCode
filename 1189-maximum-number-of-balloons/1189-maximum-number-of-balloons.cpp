class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int f[26] = {0};
        for (char ch : text) f[ch - 'a']++;

        if (f['l' - 'a'] <= 1 || f['o' - 'a'] <= 1) return 0;
        if (f['b' - 'a'] < 1 || f['a' - 'a'] < 1 || f['n' - 'a'] < 1) return 0;

        int minFreqOfLO = min(f['l' - 'a'] , f['o' - 'a']);
        int minFreqOfBAN = min({f['b' - 'a'] , f['a' - 'a'] , f['n' - 'a']});

        return min(minFreqOfLO / 2 , minFreqOfBAN);
    }
};