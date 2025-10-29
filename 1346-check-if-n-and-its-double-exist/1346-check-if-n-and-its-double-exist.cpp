class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i = 0 ;
        while( i < arr.size()){
            int j = i + 1;
        while( j < arr.size() ){

            if( arr[i] == 2 * arr[j] or 2 * arr[i] == arr[j]  ){
                return true;
            }
        
        j++;
        }

        i++;
        }
        
        return false;
    }
};