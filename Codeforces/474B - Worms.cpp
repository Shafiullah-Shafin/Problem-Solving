#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int n, x; cin >> n;
    int a[n + 2];
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int m; cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        cout << lower_bound(a, a + n + 1, x) - a << '\n';
    }
    return 0;
}
