#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        s += 'W';
        n++;
        bool rr = false, bb = false;
        bool tt = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'W') {
                if ((!rr && bb) || (rr && !bb)) {
                    tt = false;
                    break;
                }
                rr = false;
                bb = false;
            }
            else if (s[i] == 'B') {
                bb = true;
            }
            else if (s[i] == 'R') {
                rr = true;
            }
        }
        if (!tt) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
