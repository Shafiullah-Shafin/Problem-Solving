#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int a[m + 2];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a, a + m);
    if (a[0] == 1 || a[m - 1] == n) {
        cout << "NO" << '\n';
        return 0;
    }
    bool ok = true;
    for (int i = 2; i < m; i++) {
        if (a[i] - a[i - 1] == 1 && a[i - 1] - a[i - 2] == 1) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}
