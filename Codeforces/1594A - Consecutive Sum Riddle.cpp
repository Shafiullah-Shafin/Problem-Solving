#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long l, r, n; cin >> n;
        if (n == 1) l = 0, r = 1;
        else l = -(n - 1), r = n;
        cout << l << ' ' << r << '\n';
    }
    return 0;
}

