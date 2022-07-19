#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sz = s.size();
        if (sz == 1) {
            cout << "NO" << '\n';
            continue;
        }
        bool tt = true;
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'a' || s[i] == 'b') {
               continue;
            }
            else {
                tt = false;
                break;
            }
        }
        if (!tt) {
            cout << "NO" << '\n';
            continue;
        }
        tt = true;
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'a') {
                int j = i;
                int cnt = 0;
                while (s[j] == 'a') {
                    j++;
                    cnt++;
                }
                if (cnt == 1) {
                    tt = false;
                    break;
                }
                i = j - 1;
            }
            else {
                int j = i;
                int cnt = 0;
                while (s[j] == 'b') {
                    j++;
                    cnt++;
                }
                if (cnt == 1) {
                    tt = false;
                    break;
                }
                i = j - 1;
            }
        }
        if (!tt) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
