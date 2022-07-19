#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int> mp;
        int res = n + 1;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (mp.find(x) != mp.end()) {
                res = min(res, i - mp[x]);
            }
            mp[x] = i;
        }
        cout << n - res << '\n';
    }
    return 0;
}

