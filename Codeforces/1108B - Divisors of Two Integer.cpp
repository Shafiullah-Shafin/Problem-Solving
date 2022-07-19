#include <bits/stdc++.h>
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
    int x, y = a[n - 1];
    for (int i = n-1; i > 0; i--) {
        if (a[i] == a[i - 1] || y % a[i] != 0) {
           x = max(a[i], x);
        }
    }
    cout << x << ' ' << y << '\n';
    return 0;
}

