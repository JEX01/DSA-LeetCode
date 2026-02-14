class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,maxi=INT_MIN;
        for(char c:s){
            if(c=='(') cnt++;
            if(c==')') cnt--;
            if(cnt>maxi) maxi=cnt;
        }
        return maxi;
    }
};