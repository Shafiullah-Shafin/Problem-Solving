#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool tt = false;
        while (n >= 0) {
           if (n % 11 == 0) {
              tt = true;
              break;
           }
           n -= 111;
        }
        if (tt) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}


