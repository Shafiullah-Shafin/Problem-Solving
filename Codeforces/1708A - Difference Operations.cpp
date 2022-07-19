#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        bool yo = true;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (i > 1 && a[i] % a[1]) yo = false;
        }
        cout << (yo ? "YES" : "NO") << '\n';
    }
    return 0;
}
