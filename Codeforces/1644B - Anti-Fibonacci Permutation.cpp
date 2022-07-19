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
           int val = n;
           for (int j = 1; j <= n; j++) {
               if (val == 3) val--;
               if (i == j) {
                  a[i][j] = 3;
               }
               else {
                 a[i][j] = val;
                 val--;
               }
           }
       }
       swap (a[n][n - 2], a[n][n]);
       for (int i = 1; i <= n; i++) {
           for (int j = 1; j <= n; j++) {
               cout << a[i][j] << ' ';
           }
           cout << '\n';
       }
    }
    return 0;
}
