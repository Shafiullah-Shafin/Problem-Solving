#include <bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    int n; cin >> n;
    i64 a[n + 2], mx = 0;
    for (i64 i = 0; i < n; i++) {
        cin >> a[i];
        mx = max (mx, a[i]);
    }
    i64 rem = 0, gcd = 0;
    for (int i = 0; i < n; i++) {
        rem += (mx - a[i]);
        gcd = __gcd (gcd, (mx - a[i]));
    }
    cout << rem / gcd << ' ' << gcd << '\n';
    return 0;
}
