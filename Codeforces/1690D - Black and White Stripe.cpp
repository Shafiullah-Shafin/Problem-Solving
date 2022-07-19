#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        char s[n + 2];
        int b = 0, w = 0, ans = (1 << 30);
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }
        for (int i = 1; i <= k; i++) {
            if (s[i] == 'W') w++;
            else b++;
        }
        ans = min(ans, w);
        for (int j = 1, i = k + 1; i <= n; i++, j++) {
            if (s[i] == 'W') w++;
            else b++;
            if (s[j] == 'W') w--;
            else b--;
            ans = min(ans, w);
        }
        cout << ans << '\n';
    }
    return 0;
}
