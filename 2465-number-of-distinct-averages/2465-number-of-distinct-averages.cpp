class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double> arr;
        int i = 0;
        int j = nums.size() - 1;
        while( i < j ){
                arr.insert((nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }

        return arr.size() ;
    }
};  