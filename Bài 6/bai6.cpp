#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() < s2.size()) swap(s1, s2);

    vector<int> a, b;
    for (char c : s1) a.push_back(c - '0');
    for (char c : s2) b.push_back(c - '0');

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < b.size(); i++) a[i] += b[i];

    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 8) {
            if (i + 1 == a.size()) a.push_back(0);
            a[i + 1] += a[i] / 8;
            a[i] %= 8;
        }
    }

    reverse(a.begin(), a.end());

    for (int x : a) cout << x;
}
