#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
          int n; cin >> n;
          int a[n + 2];
          set<int> st;
          for (int i = 0; i < n; i++) {
              cin >> a[i];
              st.insert(a[i]);
          }
          if (st.size() == 1) {
             cout << -1 << '\n';
             continue;
          }
          sort(a, a + n);
          int res = 0;
          for (int i = 0; i < n; i++) {
               res  = __gcd(res, a[i]-a[0]);
          }
          cout << res << '\n';
    }
    return 0;
}

