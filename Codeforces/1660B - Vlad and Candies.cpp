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
       if (n == 1) {
          if (a[1] == 1) cout << "YES" << '\n';
          else  cout << "NO" << '\n';
          continue;
       }
       sort (a + 1, a + n + 1);
       if (a[n - 1] < a[n] - 1) cout << "NO" << '\n';
       else cout << "YES" << '\n';
    }
    return 0;
}




