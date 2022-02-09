#include "../../../common.hpp"

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> cant(26, 1);
        for(char &c : brokenLetters) cant[c - 'a'] = 0;
        
        int n = (int)text.length(), ans = 0;
        
        for(int i = 0, j = 0; i < n; i = j) {
            bool good = true;
            while(j < n && text[j] != ' ')
                good &= cant[text[j++] - 'a'];
            if(good) ++ans;
            ++j;
        }
        
        return ans;
    }
};