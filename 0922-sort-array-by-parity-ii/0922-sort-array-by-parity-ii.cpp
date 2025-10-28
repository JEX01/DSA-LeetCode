class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(j < nums.size() -1 && i < nums.size() -1 ){

            while( i % 2 == nums[i] % 2 && i < nums.size() -1 ){
                i++;
            }
            j = i;

            if( i + 1 < nums.size() -1 ){
            j = i + 1;
            }

            while( i % 2 != nums[j] % 2   && j < nums.size() - 1 ){
                j++;
            }
            swap(nums[i],nums[j]);
            i++;
        }
    return nums;
    }
};