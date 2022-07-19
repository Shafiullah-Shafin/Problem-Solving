#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long res = 0;
        int a[n + 2], cnt[32];
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            int msb = 31 - __builtin_clz(a[i]);
            res += cnt[msb];
            cnt[msb]++;
        }
        cout << res << '\n';
    }
    return 0;
}


