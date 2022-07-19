#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        char s[n + 2];
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
            if (s[i] == '1') cnt++;
        }
        int mid = n / 2;
        if (cnt == n) {
           cout << 1 << ' ' << mid * 2 << ' ' << 1 << ' ' << mid << '\n';
           continue;
        }
        for (int i = 1; i <= n; i++) {
            if (s[i] == '0') {
                if (i <= mid) cout << i << ' ' << n << ' ' << i + 1 << ' ' << n << '\n';
                else cout << 1 << ' ' << i << ' ' << 1 << ' ' << i - 1 << '\n';
                break;
            }
        }
    }
    return 0;
}
