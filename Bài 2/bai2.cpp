#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, d, ans = 0;
    cin >> n >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j] && (a[i] * a[j] * (j - i) / (a[j] - a[i])) < d) ans++;
        }
    }
    
    cout << ans;
    
    return 0;
}
