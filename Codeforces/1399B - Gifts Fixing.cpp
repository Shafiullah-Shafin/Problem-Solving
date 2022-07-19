#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mina, minb; mina = minb = 1 << 30;
        int a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mina = min (mina, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            minb = min (minb, b[i]);
        }
        long long tot = 0;
        for (int i = 0; i < n; i++) {
            tot += max (a[i] - mina, b[i] - minb);
        }
        cout << tot << '\n';
    }
    return 0;
}

