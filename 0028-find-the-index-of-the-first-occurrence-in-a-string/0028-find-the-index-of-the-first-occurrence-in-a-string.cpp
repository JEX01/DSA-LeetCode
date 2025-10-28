#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = haystack.size();
        int i = needle.size();

        int a, b;
        a = b = 0;

        if (i == j && haystack == needle) {
            return a;
        }

        while (a <= j - (i)) {
            if (haystack.substr(a, needle.size()) == needle) {
                return a;
                a++;
                b++;
            } else {
                a++;
                b++;
            }
        }

        return -1;
    };
};