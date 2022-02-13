#include "../../../common.hpp"

class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans = 0;
        if(num2 > num1) swap(num2, num1);
        
        while(num1 > 0 && num2 > 0) {
            num1 -= num2;
            ans++;
            if(num1 < num2) swap(num1, num2);
        }
        return ans;
    }
};