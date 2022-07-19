#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 4 != 0) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        for (int i = 1; i <= n / 2; i++) {
             cout << i * 2 << ' ';
        }
        for (int i = 1; i < n / 2; i++) {
             cout << i * 2  - 1 << ' ';
        }
        cout << (n - 1) + n / 2 << '\n';
    }
    return 0;
}

