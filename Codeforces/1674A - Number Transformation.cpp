#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        if (x > y) cout << 0 << ' ' << 0 << '\n';
        else if (x == y) cout << 3 << ' ' << 1 << '\n';
        else {
            if (y % x == 0) {
                cout << 1 << ' ' << y / x << '\n';
            }
            else {
                cout << 0 << ' ' << 0 << '\n';
            }
        }
    }
    return 0;
}

