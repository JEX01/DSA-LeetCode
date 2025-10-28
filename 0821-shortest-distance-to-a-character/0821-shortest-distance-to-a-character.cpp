class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector < int > arr ;
        vector < int > finalarr;
        vector < int > temp ;
        int i = 0;
        for ( auto ch : s  ){
            if ( ch == c ){
                arr.push_back(i);
            }
                i++;
        }
    for (int i = 0; i < s.size(); i++) {
            int minDist = INT_MAX;
            for (int pos : arr) {
                minDist = min(minDist, abs(i - pos));
            }
            finalarr.push_back(minDist);       
        }

    return finalarr;
    }
};