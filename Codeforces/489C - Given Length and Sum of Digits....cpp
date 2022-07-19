#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, s; cin >> m >> s;
    if ((9 * m) < s || (m > 1 && s == 0)) cout << -1 << ' ' << -1 << '\n';
    else if (m == 1 && s == 0) cout << 0 << ' ' << 0 << '\n';
    else {
        int i = 0, a[m + 2] = {0};
        while (s) {
            int k = min(9, s);
            a[++i] = k;
            s -= k;
        }
        int extra = 0;
        if (a[m]) cout << a[m];
        else cout << 1, extra++;
        for (int i = m - 1; i >= 1; i--) {
            if (!a[i]) cout << a[i];
            else if (a[i] && extra) {
                cout << a[i] - 1;
                extra--;
            }
            else cout << a[i];
        }
        cout << ' ';
        for (int i = 1; i <= m; i++) {
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}



