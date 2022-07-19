#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        bool tt = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0 && a[i] < a[i - 1]) {
                tt = false;
            }
        }
        if (!tt)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

