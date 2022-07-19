#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a, a + n);
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        mx = max (mx, a[i] - a[i - 1]);
    }
    cout << max (a[0], mx) << '\n';
  }
  return 0;
}
