#include<bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b, c, x, y, rem = 0;
        cin >> a >> b >> c >> x >> y;
        if (x > a) rem += x - a;
        if (y > b) rem += y - b;
        if (rem <= c) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0 ;
}
