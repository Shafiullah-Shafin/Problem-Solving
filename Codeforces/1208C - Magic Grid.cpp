#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int even = 0, odd = 1;
  for (int i = 1; i <= n; i++) {
      if (i % 2 == 1) {
        for (int j = 1; j <= n; j++) {
            cout << even << ' ';
            even += 2;
        }
      }
      else {
        for (int j = 1; j <= n; j++) {
            cout << odd << ' ';
            odd += 2;
        }
      }
      cout << '\n';
  }
  return 0;
}
