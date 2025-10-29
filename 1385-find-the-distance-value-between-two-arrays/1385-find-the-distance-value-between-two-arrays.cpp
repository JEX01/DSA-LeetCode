class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int t = 0 ;
        int i = 0 ;
        int ans = 0;
        while(i < arr1.size()){
        int j = 0;
            t = 0;
            while( j < arr2.size()){
                if(abs(arr1[i] - arr2[j]) <= d){
                    t++;
                }
            j++;
            }
            if( t == 0) ans++;
            i++;
        }
        return ans;
    }
};