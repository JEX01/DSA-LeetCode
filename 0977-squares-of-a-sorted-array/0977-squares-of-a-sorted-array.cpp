class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        for( int n : nums){
            arr.push_back( n * n);
        }
        sort(arr.begin(), arr.end());
    return arr;
    }
};

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int i = 0;
//         for( int n : nums){
//             nums[i] = n * n;
//             i++;
//         }
//         sort( nums.begin(), nums.end() );
//     return nums;
//     }
// };