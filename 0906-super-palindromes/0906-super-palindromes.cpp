class Solution {
public:
    bool ispalin(string s)
    {
        string rev = s;
        reverse(rev.begin(), rev.end());
        return rev == s;
    }
    int superpalindromesInRange(string left, string right) {
        long long l = stoll(left);
        long long r = stoll(right);
        vector<long long>v;
        
        for(int i = 1; i < 10; i++)
            v.push_back(i);
        
        for(int i = 1; i <= 1e4; i++)
        {
            string s1 = to_string(i);
            string s2 = to_string(i);
            reverse(s2.begin(), s2.end());
            v.push_back(stoll(s1+s2));
            for(int j = 0; j < 10; j++)
            {
                string temp = s1;
                temp += (j+'0');
                temp += s2;
                v.push_back(stoll(temp));
            }
        }
        int ans = 0;
        for(auto it:v)
        {
            if(it > 1e9)
                continue;
            long long num = it*it;
            if(num <= r and num >= l and ispalin(to_string(num)))
                ans++;
        }
        return ans;
    }
};