#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2], b[n + 2];
        int pos1 = n + 1, pos_1 = n + 1;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == -1) {
                pos_1 = min(i, pos_1);
            }
            else if (a[i] == 1) {
                pos1 = min(i, pos1);
            }
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (a[i] > b[i]) {
               if (pos_1 >= i) {
                  ok = false;
                  break;
               }
            }
            else if (a[i] < b[i]) {
               if (pos1 >= i) {
                  ok = false;
                  break;
               }
            }
        }
        if (ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
