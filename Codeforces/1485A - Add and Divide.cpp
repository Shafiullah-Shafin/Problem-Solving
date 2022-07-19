#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int a, b; cin >> a >> b;
       int cnt, ans = 1e9;
       vector<int> dp (33, 0);
       (b == 1) ? b++, cnt = 1 : cnt = 0;
       for (int i = 0; i <= 32; i++) {
           int bb = b + i;
           int aa = a;
           dp[i] = cnt;
           while (aa) {
              aa /= bb;
              dp[i]++;
           }
           ans = min (ans, dp[i] + i);
       }
       cout << ans << '\n';
    }
    return 0;
}

