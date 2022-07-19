#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        map<char, int> mp;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (mp.count(s[i]) && mp[s[i]] != i - 1) {
                ok = false;
                break;
            }
            mp[s[i]] = i;
        }
        if (ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
