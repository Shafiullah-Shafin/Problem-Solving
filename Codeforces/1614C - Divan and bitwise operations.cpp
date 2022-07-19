#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    long long all_or = 0;
    int l , r , x;
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> x;
        all_or |= x;
    }
    long long tot = all_or % mod;
    for (int i = 1; i <= n - 1; i++) {
        tot = tot * 2 % mod;
    }
    cout << tot << '\n';
  }
  return 0;
}


