#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a[5], b[5];
        for (int i = 1; i <= 4; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + 5);
        bool yo = false;
        int mx1 = max(a[1], a[2]);
        int mx2 = max(a[3], a[4]);
        if ((mx1 == b[3] && mx2 == b[4]) || (mx2 == b[3] && mx1 == b[4])) yo = true;
        cout << (yo ? "YES" : "NO") << '\n';
    }
    return 0;
}
