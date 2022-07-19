#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int ans = 0;
        if (n % k == 0 || k == 1) ans = 1;
        else if (n > k) ans = 2;
        else {
            ans = k / n;
            if (k % n) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
