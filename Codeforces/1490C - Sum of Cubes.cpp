#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long x; cin >> x;
        bool tt = false;
        for (int a = 1; 1LL * a * a * a <= x; a++) {
            long long remain = x - (1LL * a * a * a);
            if (remain <= 0) break;
            int b = (int) cbrt(remain);
            if (1LL * b * b * b == remain) tt = true;
            if (tt) break;
        }
        if (tt) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}

