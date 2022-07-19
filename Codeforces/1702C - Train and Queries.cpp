#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        map<int, int> mn, mx;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (!mn[x]) mn[x] = i;
            mx[x] = i;
        }
        while (q--) {
            int a, b; cin >> a >> b;
            bool yo = true;
            if (!mn[a] || !mn[b]) yo = false;
            else if (mn[a] > mx[b]) yo = false;
            if (yo) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}
