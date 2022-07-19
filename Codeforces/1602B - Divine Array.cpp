#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       int a[n + 2][n + 2];
       for (int i = 1; i <= n; i++) {
           int x; cin >> x;
           a[0][i] = x;
       }
       map<int, int> mp;
       for (int i = 1; i <= n; i++) {
           for (int j = 1; j <= n; j++) {
               mp[a[i - 1][j]]++;
           }
           for (int j = 1; j <= n; j++) {
               a[i][j] = mp[a[i - 1][j]];
           }
           mp.clear();
       }
       int q; cin >> q;
       while (q--) {
          int x, k; cin >> x >> k;
          if (k >= n) {
            cout << a[n][x] << '\n';
          }
          else {
            cout << a[k][x] << '\n';
          }
       }
    }
    return 0;
}

