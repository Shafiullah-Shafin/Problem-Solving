#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        set<char> se;
        int l, cnt = 0, sz = s.size();
        for (int i = 0; i < sz; i++) {
            if (se.find(s[i]) == se.end() && i < sz - 1) {
                se.insert(s[i]);
            }
            else if (se.find(s[i]) == se.end() && i == sz - 1) {
                l = se.size();
                cnt += l + 1;
            }
            else {
                l = se.size();
                cnt += l - 1;
                se.clear();
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}




