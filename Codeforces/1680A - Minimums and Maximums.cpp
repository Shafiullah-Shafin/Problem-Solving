#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 > l2) {
           if (l1 > r2) cout << l1 + l2 << '\n';
           else cout << l1 << '\n';
        }
        else if (l1 < l2) {
           if (l2 > r1) cout << l1 + l2 << '\n';
           else cout << l2 << '\n';
        }
        else {
            cout << l1 << '\n';
        }
    }
    return 0;
}
