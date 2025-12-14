#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b, c, ans = 0;
    cin >> a >> b >> c;
    
    for (ll x = 1; a * x < c; x++) {
        ll d = c - a * x;
        if (d % b == 0) {
            ll y = d / b;
            if (__gcd(x, y) == 1) ans++;
        }
    }
    
    cout << ans;

    return 0;
}
