#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, z; cin >> n >> z;
        int mx = -1;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            x |= z;
            mx = max(mx, x);
        }
        cout << mx << '\n';
    }
    return 0;
}
