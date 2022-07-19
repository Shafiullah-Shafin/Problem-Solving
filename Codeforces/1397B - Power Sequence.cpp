#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    i64 a[n + 2];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    i64 res = (1LL << 62);
    int mx = pow(10e18, 1.0/n);
    for (int i = 1; i <= mx; i++) {
        i64 cur = 0, power = 1;
        for (int j = 0; j < n; j++) {
            cur += abs(power - a[j]);
            power *= i;
        }
        res = min(res, cur);
    }
    cout << res << '\n';
}
