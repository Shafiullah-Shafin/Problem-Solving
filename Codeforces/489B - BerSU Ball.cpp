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
    int m; cin >> m;
    int b[m + 2];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int ans = 0;
    for (int i = 0, j = 0; i < n && j < m; ) {
        if (abs(a[i] - b[j]) <= 1) {
            ans++;
            i++;
            j++;
        }
        else if (a[i] > b[j]) j++;
        else i++;
    }
    cout << ans << '\n';
    return 0;
}


