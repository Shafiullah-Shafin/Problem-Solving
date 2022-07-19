#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 2], one[32] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int k = 0; k <= 30; k++) {
            if ((a[i] >> k) & 1)
                one[k]++;
        }
    }
    int gcd = 0;
    for (int i = 0; i <= 30; i++) {
        gcd = __gcd(gcd, one[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (gcd % i == 0)
           cout << i << ' ';
    }
    cout << '\n';
  }
  return 0;
}

