#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int l, r, a; cin >> l >> r >> a;
       int div = r / a;
       int p = div * a - 1;
       if (p <= l) p = l;
       int q = div * a;
       if (q <= l) q = l;
       int x = p / a + p % a;
       int y = q / a + q % a;
       int z = r / a + r % a;
       cout << max ({x, y, z}) << '\n';
    }
    return 0;
}


