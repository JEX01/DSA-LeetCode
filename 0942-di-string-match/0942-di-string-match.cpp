class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> arr;
        int i = -1;
        int j = s.size() + 1;
        int r = 0;
        for( auto c : s){
        
        if( c == 'I'  ){
        
           arr.push_back(++i);
        
        } else {

            arr.push_back(--j);

        }

        r++;

        }
        
        arr.push_back( ++i);

        return arr;
    }
};