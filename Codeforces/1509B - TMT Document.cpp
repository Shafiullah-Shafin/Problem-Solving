#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (s[0] == 'M' || s[n - 1] == 'M') {
            cout << "NO" << '\n';
            continue;
        }
        bool ok = true;
        int mm = 0, tt = 0;
        for (int i = 0; i < n; i++) {
            (s[i] == 'M') ? mm++ : tt++;
            if (mm > tt) ok = false;
        }
        int mm_ = 0, tt_ = 0;
        for(int i = n - 1; i >= 0; i--) {
            (s[i] == 'M') ? mm_++ : tt_++;
            if (mm_ > tt_) ok = false;
        }
        if (!ok || mm * 2 != tt) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
