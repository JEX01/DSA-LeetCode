class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> corr;
        int i = 1;
        while( i < nums.size() ){
            if( nums[ i - 1 ] == nums[ i ] ){
                corr.push_back(nums[i]);
            }
            i++;
        }
        return corr;
    }
};