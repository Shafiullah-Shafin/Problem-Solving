#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        char s[m + 2];
        for (int i = 1; i <= m; i++) {
            s[i] = 'B';
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] <= (m + 1 - a[i])) {
                if (s[a[i]] == 'A') s[m + 1 - a[i]] = 'A';
                else s[a[i]] = 'A';
            }
            else {
                if (s[m + 1 - a[i]] == 'A') s[a[i]] = 'A';
                else s[m + 1 - a[i]] = 'A';
            }
        }
        for (int i = 1; i <= m; i++) {
            cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}
