#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       int a[n + 2];
       bool tt = false;
       for (int i = 1; i <= n; i++) {
           cin >> a[i];
           if (a[i] == 0) {
              tt = true;
           }
       }
       if (!tt) {
          cout << 0 << '\n';
          continue;
       }
       int l, r;
       for (int i = 2; i < n; i++) {
           if (a[i] == 0) {
              l = i;
              break;
           }
       }
       for (int i = n - 1; i >= 2; i--) {
           if (a[i] == 0) {
              r = i;
              break;
           }
       }
       cout << (r - l + 2) << '\n';
    }
    return 0;
}
