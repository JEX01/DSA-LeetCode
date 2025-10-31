class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0 ;
        int j = nums.size() - 1;
        long long total = 0;
        while( i <= j  ){
            string s;
            if( i == j ){
             s = to_string(nums[i]);
            } else{
             s = to_string(nums[i]) + to_string(nums[j]);
            }
           total += stoll(s);
            i++;
            j--;
        }
        return total;
    }
};