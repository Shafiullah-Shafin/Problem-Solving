#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sz = s.size();
        int a, b, tot = 0;
        for (int i = 0; i < sz; i++) {
            tot += (int)s[i] - 96;
        }
        if (sz & 1) {
           if (s[0] <= s[sz - 1]) {
              b = (int)s[0] - 96;
              a = tot - b;
           }
           else {
              b = (int)s[sz - 1] - 96;
              a = tot - b;
           }
           if (a > b) cout << "Alice " << abs(a - b) << '\n';
           else cout << "Bob " << abs(a - b) << '\n';
        }
        else {
           cout << "Alice " << tot << '\n';
        }
    }
    return 0;
}
