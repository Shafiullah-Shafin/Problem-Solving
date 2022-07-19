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
        sort (a + 1, a + n + 1);
        int m; cin >> m;
        int b[m + 2];
        for (int i = 1; i <= m; i++) {
            cin >> b[i];
        }
        sort (b + 1, b + m + 1);
        if (a[n] >= b[m]) cout << "Alice" << '\n';
        else cout << "Bob" << '\n';
        if (b[m] >= a[n]) cout << "Bob" << '\n';
        else cout << "Alice" << '\n';
    }
    return 0;
}
