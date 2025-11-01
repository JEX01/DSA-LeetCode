class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxCaptured = 0;
        int lastFort = -1;
        for (int i = 0; i < forts.size(); i++) {
            if (forts[i] != 0) {
            if (lastFort != -1) {
            if (forts[i] != forts[lastFort]) {
                        int captured = i - lastFort - 1;
                        maxCaptured = max(maxCaptured, captured);
            }
            }
                lastFort = i;
            }
        }
        return maxCaptured;
    }
};