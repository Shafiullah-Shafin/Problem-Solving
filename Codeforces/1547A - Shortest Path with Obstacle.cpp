#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int ans = abs(x1 - x2) + abs(y1 - y2);
        if (x1 == x2) {
            if (y1 > y2) {
                swap(y1, y2);
            }
            if (x1 == x3 && y1 <= y3 && y3 <= y2) {
                ans += 2;
            }
        }
        if (y1 == y2) {
            if (x1 > x2) {
                swap(x1, x2);
            }
            if (y1 == y3 && x1 <= x3 && x3 <= x2) {
                ans += 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


