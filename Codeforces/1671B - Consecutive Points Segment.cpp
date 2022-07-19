#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        a[1]++, a[n]--;
        int dif = a[n] - a[1] + 1;
        if (dif <= n) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
