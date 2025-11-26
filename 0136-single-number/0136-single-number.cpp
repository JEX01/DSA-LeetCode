class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
//for me:- it delete or remove the constant or duplication using XOR like = 1^2^2 with constant space and loop
        for (int n : nums) {
            x ^= n;
        }
        return x;
    }
};
