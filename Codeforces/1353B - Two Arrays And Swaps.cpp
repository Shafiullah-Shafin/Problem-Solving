#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n + 5], b[n + 5];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int sum = 0;
        sort (a, a + n);
        sort (b, b + n, greater<int>());
        for (int i = 0; i < n; i++) {
            if (i < k) {
                sum += max(a[i], b[i]);
            }
            else
                sum += a[i];
        }
        cout << sum << '\n';
    }
    return 0;
}

