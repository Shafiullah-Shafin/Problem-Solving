#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int mn = min(a, b);
        int mx = max(a, b);
        mn *= 2;
        if (mn <= mx) cout << mx * mx << '\n';
        else cout << mn * mn << '\n';
    }
    return 0;
}
