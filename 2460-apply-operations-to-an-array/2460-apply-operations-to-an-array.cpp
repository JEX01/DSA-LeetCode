class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        vector<int> result;
        for (auto i : nums) {
            if (i != 0)
                result.push_back(i);
        }

        while (result.size() < nums.size())
            result.push_back(0);
        
        return result;
    }
};
