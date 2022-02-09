#include "../../../common.hpp"

class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = (int)colors.length();
        vector<int> moves(2, 0);
        
        for(int i = 0, j = 0; i < n; i = j) {
            while(j < n && colors[i] == colors[j]) ++j;
            moves[colors[i] - 'A'] += max(0, j - i - 2);
        }
        
        return moves[0] > moves[1];
    }
};