#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
        int n; cin >> n;
        int msb = 31 - __builtin_clz(n);
        cout << (1 << msb) - 1 << '\n';
  }
  return 0;
}

