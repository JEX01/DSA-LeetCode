class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        for( int n : nums){
            nums[i] = n * n;
            i++;
        }
        sort( nums.begin(), nums.end() );
    return nums;
    }
};