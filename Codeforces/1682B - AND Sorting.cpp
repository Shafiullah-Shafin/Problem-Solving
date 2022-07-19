#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x != i) v.push_back(x);
        }
        int ans = v[0];
        for (auto x : v) {
            ans &= x;
        }
        cout << ans << '\n';
    }
    return 0;
}
