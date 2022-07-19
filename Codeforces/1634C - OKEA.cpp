#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
     int n, k; cin >> n >> k;
     if (k == 1) {
        cout << "YES" << '\n';
        for (int i = 1; i <= n; i++) {
            cout << i << '\n';
        }
        continue;
    }
    if (n % 2 == 1) {
       cout << "NO" << '\n';
       continue;
    }
    cout << "YES" << '\n';
    for (int i = 1; i <= n; i++) {
        int num = i;
        for (int key = 1; key <= k; key++) {
            cout << num << ' ';
            num += n;
        }
        cout << '\n';
    }
  }
  return 0;
}

