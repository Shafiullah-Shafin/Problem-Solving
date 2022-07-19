#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sz = s.size();
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < sz; i++) {
            if (s[i] == 'A') a++;
            else if (s[i] == 'B') b++;
            else c++;
        }
        if (a + c == b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
