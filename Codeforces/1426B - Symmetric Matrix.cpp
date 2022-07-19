#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int xx, xy, yx, yy;
        bool tt = false;
        for (int i = 1; i <= n; i++) {
            cin >> xx >> xy >> yx >> yy;
            if (xy == yx)
               tt = true;
        }
        if (m % 2 == 0) {
            if (tt)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
