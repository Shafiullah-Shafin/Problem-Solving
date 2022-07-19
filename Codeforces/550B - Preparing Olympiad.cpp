#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, l, r, x; cin >> n >> l >> r >> x;
    int a[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int way = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0, mn = (1 << 30), mx = -1, cnt = 0;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                sum += a[i];
                mn = min(a[i], mn);
                mx = max(a[i], mx);
                cnt++;
            }
        }
        if (sum >= l && sum <= r && mx - mn >= x && cnt >= 2)
            way++;
    }
    cout << way << '\n';
    return 0;
}

