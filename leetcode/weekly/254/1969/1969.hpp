#include "../../../common.hpp"

typedef long long ll;
const int mod = (int)1e9+7;

ll power(ll a, ll n) {
    ll ans = 1;
    while(n) {
        if(n & 1) ans = (ans % mod) * (a % mod) % mod;
        a = (a % mod) * (a % mod) % mod;
        n >>= 1;
    }
    return ans;
}

class Solution {
public:
    int minNonZeroProduct(int p) {
        ll a = (1ll << p) - 1;
        ll b = max(1ll, a - 1);
        
        ll ans = (a % mod) * (power(b, b / 2) % mod) % mod;
        return ans;
    }
};