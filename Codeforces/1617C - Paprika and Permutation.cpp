#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
     int n; cin >> n;
     int a[n + 2] = {0};
     multiset<int> se;
     for (int i = 1; i <= n; i++) {
         int x; cin >> x;
         if (x <= n) {
            if (a[x])
                se.insert(x);
            else
                a[x]++;
         }
         else
            se.insert(x);
     }
     int op = 0;
     bool tt = false;
     for (int i = 1; i <= n; i++) {
         if (a[i]) continue;
         auto it = se.lower_bound(i * 2 + 1);
         if (it == se.end()) {
             tt = true;
             break;
         }
         se.erase(it);
         op++;
     }
     if (tt) op = -1;
     cout << op << '\n';
  }
  return 0;
}

