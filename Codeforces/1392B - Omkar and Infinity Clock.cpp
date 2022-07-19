#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long n, k; cin >> n >> k;
        int a[n + 2];
        int itr, mx = INT_MIN;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mx = max (a[i], mx);
        }
        if (k & 1) itr = 1;
        else itr = 2;
        if (itr == 1) {
            for (int i = 1; i <= n; i++) {
                a[i] = mx - a[i];
            }
        }
        else {
            int mxx = INT_MIN;
            for (int i = 1; i <= n; i++) {
                a[i] = mx - a[i];
                mxx = max (mxx, a[i]);
            }
            for (int i = 1; i <= n; i++) {
                a[i] = mxx - a[i];
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}


