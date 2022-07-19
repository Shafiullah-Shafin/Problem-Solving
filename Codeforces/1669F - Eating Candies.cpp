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
        int ans = 0, l = 1, r = n;
        int suml = a[l], sumr = a[r];
        while (l < r) {
            if (suml == sumr) {
                ans = l + n - (r - 1);
            }
            if (suml <= sumr) {
                l++;
                suml += a[l];
            }
            else {
                r--;
                sumr += a[r];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

