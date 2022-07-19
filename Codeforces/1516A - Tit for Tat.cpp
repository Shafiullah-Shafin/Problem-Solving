#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
       int n, k; cin >> n >> k;
       int a[n + 2];
       for (int i = 1; i <= n; i++) {
           cin >> a[i];
       }
       while (k--) {
           for (int i = 1; i <= n - 1; i++) {
               if (a[i]) {
                  a[i]--;
                  a[n]++;
                  break;
               }
           }
       }
       for (int i = 1; i <= n; i++) {
           cout << a[i] << ' ';
       }
       cout << '\n';
  }
  return 0;
}

