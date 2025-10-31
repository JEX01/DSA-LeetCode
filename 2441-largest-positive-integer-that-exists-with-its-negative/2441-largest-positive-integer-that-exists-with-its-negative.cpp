class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while( i < j ){
        while( i < j  ){
            if( abs(nums[i]) == nums[j] && nums[i]  < 0 ){
                return nums[j];
            }
        i++;
        }
        i = 0;
        j--;
        }
    return -1;
    }
};