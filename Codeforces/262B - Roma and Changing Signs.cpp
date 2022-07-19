#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    int a[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] < 0 && k) {
           a[i] *= -1;
           k--;
        }
    }
    sort (a + 1, a + n + 1);
    if (k & 1) {
       a[1] *= -1;
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
    }
    cout << sum << '\n';
    return 0;
}

