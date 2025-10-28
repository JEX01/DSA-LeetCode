class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string word3;
        int t = word1.size() + word2.size();
        int n =0;
        int i =0;
        int j =0;

        while ( n < t ) {
            
            if ( i < word1.size()) { 
            word3 += word1[ i ];
            i++;
            }

            if ( j < word2.size() ) {
            word3 += word2[ j ];
            j++;
            } 

        n++;
        }

        return word3;
    }
};