class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i = 0 ;
        int j = 1 ;
        while( i < arr.size()){
            j = i + 1;
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