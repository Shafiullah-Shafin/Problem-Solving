#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        int x = a + b + c;
        int y = b + c;
        int z = c;
        assert(x % y == a && y % z == b && z % x == c);
        cout << x << ' ' << y << ' ' << z << '\n';
    }
    return 0;
}


