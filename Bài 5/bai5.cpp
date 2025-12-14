#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans;
    cin >> s;

    while (s.size() % 3 != 0) s = '0' + s;
    
    for (int i = 0; i < s.size(); i += 3) {
        int val = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0');
        ans += char('0' + val);
    }
    
    cout << ans;
    
    return 0;
}
