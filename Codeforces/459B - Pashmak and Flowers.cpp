#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[0] == a[n - 1]) {
        cout << 0 << ' ' << (1LL * n * (n - 1)) / 2 << '\n';
        return 0;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[0]) cnt1++;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == a[n - 1]) cnt2++;
    }
    int dif = a[n - 1] - a[0];
    cout << dif << ' ' << (1LL * cnt1 * cnt2) << '\n';
    return 0;
}
