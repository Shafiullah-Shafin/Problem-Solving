#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        a[0] = 0;
        long long mxadd = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i - 1] > a[i]) {
                mxadd += a[i - 1] - a[i];
            }
        }
        cout << mxadd << '\n';
    }
    return 0;
}


