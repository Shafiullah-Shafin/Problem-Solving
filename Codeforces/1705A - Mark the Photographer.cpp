#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        n *= 2;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        bool yo = true;
        for (int i = n, j = n / 2; j >= 1; i--, j--) {
            if (a[i] - a[j] < x) {
                yo = false;
                break;
            }
        }
        cout << (yo ? "YES" : "NO") << '\n';
    }
    return 0;
}
