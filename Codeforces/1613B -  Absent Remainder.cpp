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
    for (int i = 1; i <= (n / 2); i++) {
         cout << a[i] << ' ' << a[0] << '\n';
    }
  }
  return 0;
}
