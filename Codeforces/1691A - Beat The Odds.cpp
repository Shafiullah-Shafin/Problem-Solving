#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int odd = 0, even = 0;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (x & 1) odd++;
            else even++;
        }
        cout << min(odd, even) << '\n';
    }
    return 0;
}