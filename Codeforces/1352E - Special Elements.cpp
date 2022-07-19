#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       int a[n + 2], freq[n + 2];
       memset (freq, 0, sizeof(freq));
       int mx = 0;
       for (int i = 0; i < n; i++) {
           cin >> a[i];
           freq[a[i]]++;
           mx = max (mx, a[i]);
       }
       int ans = 0;
       for (int i = 0; i < n; i++) {
           int x = a[i];
           for (int j = i + 1; j < n; j++) {
               x += a[j];
               if (x > mx) break;
               if (freq[x]) {
                  ans += freq[x];
                  freq[x] = 0;
               }
           }
       }
       cout << ans << '\n';
    }
    return 0;
}


