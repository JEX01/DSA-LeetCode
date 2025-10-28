class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        int j = 0;

        while( i < word.size() ){

            if (  word[i] == ch ) {

                while (  j < i   ) {

                    swap ( word[ j ] , word[ i ] );
                    i--;
                    j++;

                }
                break;
            }

            i++;
        }
            
    return word; 
    } 
};