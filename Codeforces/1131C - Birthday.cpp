#include<bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n; cin >> n;
     int a[n + 2], b[n + 2];
     for (int i = 1; i <= n; i++) {
         cin >> a[i];
     }
     sort(a + 1, a + n + 1);
     int j = 1, k = n;
     for (int i = 1; i <= n; i++) {
         if (i % 2 != 0) {
            b[j] = a[i];
            j++;
         }
         else {
            b[k] = a[i];
            k--;
         }
     }
     for (int i = 1; i <= n; i++) {
         cout << b[i] << ' ';
     }
     cout << '\n';
     return 0;
}
