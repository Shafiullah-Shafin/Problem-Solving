#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
        int n; cin >> n;
        int tot_xor = 0;
        int a[n + 2], pxor[n + 2];
        pxor[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            tot_xor ^= a[i];
            pxor[i] = tot_xor;
        }
        if (tot_xor == 0) {
            cout << "YES" << '\n';
            continue;
        }
        bool tt = false;
        for (int i = 1; i <= n - 2 && !tt; i++) {
            for (int j = i + 1; j <= n - 1; j++) {
               int first = pxor[i];
               int mid = pxor[j] ^ pxor[i];
               int last = pxor[n] ^ pxor[j];
               if (first == mid && mid == last) {
                   tt = true;
                   break;
               }
            }
        }
        if (tt) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
  }
  return 0;
}
