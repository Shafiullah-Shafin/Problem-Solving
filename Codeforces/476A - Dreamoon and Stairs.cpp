#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    if (m > n) {
        cout << -1 << '\n';
        return 0;
    }
    int mn = 0 + n - 0;
    for (int i = 1; i <= n / 2; i++) {
        int a = i * 2;
        int b = n - a;
        int steps = i + n - a;
        if (steps % m == 0) {
            mn = min(mn, steps);
        }
    }
    cout << mn << '\n';
    return 0;
}

