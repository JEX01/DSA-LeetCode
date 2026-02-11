class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0; i<word.size(); i++){
            if(word[i]<='Z' && word[i]>='A'){
                c++;
            }
        }
        if(c==1 && word[0]<='Z' && word[0]>='A') return true;
        if(c==0) return true;
        if(c==word.size()) return true;
        return false;
        
    }
};