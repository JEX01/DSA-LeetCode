class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int>reqmpp;
        for(auto it : licensePlate){
            if(isalpha(it)){
              reqmpp[tolower(it)]++;
            }   
        }
        string ans="";

    for(auto word: words){
            unordered_map<char,int>mpp;

            for(auto w:word){
                mpp[tolower(w)]++;
           }
        

        bool flag=true;
        for(auto [c,freq] : reqmpp ){

            if(mpp[c]< freq){  
                flag=false;
                break;
            }
        }
    
        if(flag){
            if(ans=="" || word.size() < ans.size()){
                ans=word;
            }
        }
    }
        return ans;   
    }
};