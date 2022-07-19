#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n == 1) {
        cout << n << '\n';
        continue;
    }
    if (n == 2) {
        cout << -1 << '\n';
        continue;
    }
    int a[n + 2][n + 2] = {0};
    int odd = 1, even = 2, cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (cnt <= n * n / 2 && even <= n * n) {
                cnt++;
                a[i][j] = even;
                even += 2;
            }
            else {
                a[i][j] = odd;
                odd += 2;
                cnt++;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
  }
  return 0;
}
