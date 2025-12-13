#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return abs(a * b) / gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b, c, d;
    cin >> a >> c >> b >> d;
    
    ll l = lcm(c, d);
    a *= (l / c);
    b *= (l / d);
    
    a -= b;
    if (a == 0) {
        cout << 0 << " " << 1;
        return 0;
    }
    
    ll x = gcd(abs(a), l);
    a /= x;
    l /= x;
    cout << a << " " << l;
    
    return 0;
}
