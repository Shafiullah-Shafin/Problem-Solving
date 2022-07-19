#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s, ss; cin >> s >> ss;
        int sz1 = s.size();
        int sz2 = ss.size();
        set<char> se;
        bool exist = false;
        for (int i = 0; i < sz2; i++) {
            if (ss[i] == 'a') exist = true;
            se.insert(ss[i]);
        }
        if (se.size() == 1 && exist) {
            if (sz2 == 1) cout << 1 << '\n';
            else cout << -1 << '\n';
            continue;
        }
        if (exist) cout << -1 << '\n';
        else cout << (1LL << sz1) << '\n';
    }
    return 0;
}

