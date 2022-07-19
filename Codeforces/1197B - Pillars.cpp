#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    bool tt = true;
    for (int i = 2; i <= n - 1; i++) {
        if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
            tt = false;
            break;
        }
    }
    if (tt) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
