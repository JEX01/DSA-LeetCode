class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 1;
        vector<int> arr;
        for( int i  = 1; i < s.size() ; i++){
         
            if ( s[i] == s[ i-1 ]  ){
            count++;          
            }else{
                arr.push_back(count);
                count = 1;
            }
        } 
        arr.push_back(count);


    int result = 0;
    for( int i = 1 ; i < arr.size(); i++){
        result += min( arr[i-1], arr[i] );
    }
    return result;
    
    }
};