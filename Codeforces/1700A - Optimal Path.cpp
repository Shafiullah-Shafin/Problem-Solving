#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        long long ans = 0;
        for (int i = 1; i <= m; i++) {
            ans += i;
        }
        for (int i = 2; i <= n; i++) {
            ans += (i - 1) * m + m;
        }
        cout << ans << '\n';
    }
    return 0;
}
