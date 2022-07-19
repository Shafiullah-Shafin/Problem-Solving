#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 1, ans = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) cnt++;
            else {
                if (cnt & 1) ans++, cnt = 2;
                else cnt = 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
