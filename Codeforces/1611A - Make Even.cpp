#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int l = s.size();
        if ((s[l - 1] - '0') % 2 == 0) {
            cout << 0 << '\n';
            continue;
        }
        else if ((s[0] - '0') % 2 == 0) {
            cout << 1 << '\n';
            continue;
        }
        int cnt = 0;
        for (int i = 0; i < l; i++) {
            if ((s[i] - '0') % 2 != 0)
               cnt++;
        }
        if (cnt == l) {
            cout << -1 << '\n';
        }
        else {
            cout << 2 << '\n';
        }
    }
    return 0;
}
