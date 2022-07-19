#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, res; cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) {
                res = a[i];
            }
            else {
                res &= a[i];
            }
        }
        cout << res << '\n';
    }
    return 0;
}
