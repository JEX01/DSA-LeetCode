class Solution {
public:
    int minDistance(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        vector<int> pre(n2+1,0), temp(n2+1);
        for(int i2 = n2-1; i2 >= 0; --i2){
            pre[i2] = n2-i2;
        }
        for(int i1 = n1-1; i1 >= 0; --i1){
            temp[n2] = n1-i1;
            for(int i2 = n2-1; i2 >= 0; --i2){
                if(s1[i1] == s2[i2]) temp[i2] = pre[i2+1];
                else{
                    temp[i2] = 1+min(pre[i2+1], min(pre[i2], temp[i2+1]));
                }
            }
            pre = temp;
        }
        return pre[0];
    }
};