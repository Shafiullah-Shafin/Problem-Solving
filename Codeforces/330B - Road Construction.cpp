#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int a[n + 2] = {0};
    for (int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x]++;
        a[y]++;
    }
    int point;
    for (int i = 1; i <= n; i++) {
        if (!a[i]) {
            point = i;
            break;
        }
    }
    cout << n - 1 << '\n';
    for (int i = 1; i <= n; i++) {
        if (i != point) cout << i << ' ' << point << '\n';
    }
    return 0;
}
