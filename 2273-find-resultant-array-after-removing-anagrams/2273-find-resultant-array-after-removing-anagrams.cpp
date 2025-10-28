class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector <string> sorted = words;
        for( auto &w : sorted ){
            sort(w.begin(), w.end());
        }

        int i = 0;
        int j = 0;
        vector<string> arr;
        arr.push_back(words[ 0 ]);
        while( i < words.size()){


            if( sorted[ j ] == sorted[ i ] ){

                i++;
                continue;
            }

            arr.push_back(words[i]);
            j = i;


            i++;
        }
        return arr;
    }
};