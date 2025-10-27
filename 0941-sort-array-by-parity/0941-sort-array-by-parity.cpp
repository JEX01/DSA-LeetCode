class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        if (nums.size() == 0 || nums.size() == 1) {
            return nums;
        }

        while (i < j) {
            while (nums[i] % 2 == 0 && i < j)
                i++;
            while (nums[j] % 2 == 1 && i < j)
                j--;
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        return nums;
    }
};