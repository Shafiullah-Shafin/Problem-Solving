#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(26);
        for (int i = 1; i <= 2 * n + 1; i++) {
            string s; cin >> s;
            for (char x : s) {
                v[x - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (v[i] & 1) {
               cout << char('a' + i) << '\n';
               break;
            }
        }
    }
    return 0;
}
