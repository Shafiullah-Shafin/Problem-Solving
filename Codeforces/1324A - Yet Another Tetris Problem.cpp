#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       int a[n + 2];
       bool odd = false, even = false;
       for (int i = 1; i <= n; i++) {
           cin >> a[i];
           if (a[i] & 1) odd = true;
           else even = true;
       }
       if (odd && even) cout << "NO" << '\n';
       else cout << "YES" << '\n';
    }
    return 0;
}


