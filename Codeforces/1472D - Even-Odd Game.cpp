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
       sort (a, a + n, greater<int>());
       long long sum = 0;
       for (int i = 0; i < n; i++) {
           if (!(i & 1)) {
               if (!(a[i] & 1)) sum += a[i];
           }
           else {
               if (a[i] & 1) sum -= a[i];
           }
       }
       if (sum < 0)
          cout << "Bob" << '\n';
       else if (sum > 0)
          cout << "Alice" << '\n';
       else
          cout << "Tie" << '\n';
    }
    return 0;
}


