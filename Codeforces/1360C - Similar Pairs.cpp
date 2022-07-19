#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       vector<int> v(102, 0);
       int odd = 0, even = 0;
       for (int i = 1; i <= n; i++) {
           int x; cin >> x;
           v[x]++;
       }
       for (int i = 1; i <= 100; i++) {
           int remain = abs (v[i] - v[i + 1]);
           if (v[i] >= v[i + 1]) {
              v[i + 1] = 0;
              if ((i & 1) == 0) even += remain;
              else odd += remain;
              i++;
           }
           else {
              v[i + 1] = remain;
           }
       }
       if ((even & 1) == 0 && (odd & 1) == 0) {
          cout << "YES" << '\n';
       }
       else {
          cout << "NO" << '\n';
       }
    }
    return 0;
}
