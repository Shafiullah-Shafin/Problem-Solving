#include<bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      int cnt = 0, odd = 0;
      for (int i = 0; i < n; i++) {
         int x; cin >> x;
         if (x % 2 != i % 2) {
            cnt++;
         }
         if (x % 2) {
            odd++;
         }
      }
      if (odd == n / 2) {
         cout << (cnt + 1) / 2 << '\n';
      }
      else {
         cout << -1 << '\n';
      }
   }
   return 0;
}
