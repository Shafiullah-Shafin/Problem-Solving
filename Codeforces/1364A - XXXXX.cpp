#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
       int n, x; cin >> n >> x;
       vector<int> vr;
       int sum = 0;
       for (int i = 1; i <= n; i++) {
           int k; cin >> k;
           sum += k;
           if (k % x != 0)
              vr.push_back(i);
       }
       if (sum % x != 0) {
          cout << n << '\n';
          continue;
       }
       int sz = vr.size();
       int ans = -1;
       for (int i = 0; i < sz; i++) {
           ans = max({ans, n - vr[i], vr[i] - 1});
       }
       cout << ans << '\n';
    }
    return 0;
}

