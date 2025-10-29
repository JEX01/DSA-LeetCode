class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int i = 0;
        int j = 0;
        int total = 0;
        for( string ss : words ){
            j = ss.size();
            total+=j;
            if( i < s.size()  ){
                 
            if( s.substr(i, j ) == ss ){
                i = i + j;
                continue;
            }else{
                return false;
            }
            } 
        
        }
         if( s.size() <= total ){
            return true;
         }

    return false;
    }
};