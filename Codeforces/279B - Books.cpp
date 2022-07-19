#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int a[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int tot = 0, cnt = 0, j = 0;
    for (int i = 0; i < n; i++) {
        tot += a[i];
        if (tot <= m) {
           cnt++;
        }
        if (tot > m) {
            tot -= a[j];
            j++;
        }
    }
    cout << cnt << '\n';
    return 0;
}

