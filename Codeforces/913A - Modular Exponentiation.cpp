#include<bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans = 1; cin >> n;
    while (n > 0) {
        ans = (n % mod) * (ans % mod);
        n -= 1;
    }
    cout << ans << '\n';
    return 0;
}

