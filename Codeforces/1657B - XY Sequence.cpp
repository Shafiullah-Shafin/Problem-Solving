#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n, b, x, y;
       cin >> n >> b >> x >> y;
       long long a[n + 2]; a[0] = 0;
       for (int i = 1; i <= n; i++) {
           a[i] = a[i - 1] + x;
           if (a[i] > b) {
              a[i] -= x;
              a[i] -= y;
           }
       }
       long long sum = 0;
       for (int i = 1; i <= n; i++) {
           sum += a[i];
       }
       cout << sum << '\n';
    }
    return 0;
}


