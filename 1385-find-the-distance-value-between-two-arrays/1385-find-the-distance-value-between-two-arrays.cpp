class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int t = 0 ;
        int ans = 0;
        for(int i = 0 ; i< arr1.size(); i++){
            t = 0;
            for( int j = 0; j < arr2.size(); j++){
                int dif = abs(arr1[i] - arr2[j]);
                if( dif <= d){
                    t++;
                    break;
                }
            }
            if( t == 0) ans++;
        }
        return ans;
    }
};