#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sz = s.size();
        if (s[0] == 'B' || s[sz - 1] == 'A') {
            cout << "NO" << '\n';
            continue;
        }
        int b = 0, a = 0;
        bool tt = true;
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'A') a++;
            else b++;
            if (a < b) {
                tt = false;
                break;
            }
        }
        if (!tt) cout << "NO" << '\n';
        else  cout << "YES" << '\n';
    }
    return 0;
}

