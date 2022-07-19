#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += mx - a[i];
    }
    cout << ans << '\n';
    return 0;
}
