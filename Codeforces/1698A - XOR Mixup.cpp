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
        for (int i = 1; i <= n; i++) {
            int tot = 0;
            for (int j = 1; j < i; j++) {
                tot ^= a[j];
            }
            for (int j = i + 1; j <= n; j++) {
                tot ^= a[j];
            }
            if (tot == a[i]) {
                cout << a[i] << '\n';
                break;
            }
        }
    }
    return 0;
}
