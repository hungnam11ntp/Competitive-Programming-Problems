#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll m, n, k;
    cin >> m >> n >> k;
    ll mod = pow(10, k), ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= m;
        ans %= mod;
    }
    string s = to_string(ans);
    for (int i = 0; i < k - s.size(); i++) cout << 0;
    cout << ans;
    
    return 0;
}
