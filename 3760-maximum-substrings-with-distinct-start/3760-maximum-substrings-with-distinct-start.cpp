class Solution {
public:
    int maxDistinct(string s) {
        string velosandra = s;
        vector<bool> used(26,false);
        int count = 0;
            for(char c : velosandra){
                if(!used[c - 'a']){
                    used[c-'a'] = true;
                    count++;
                }
            }
        
        return count;
    }
};