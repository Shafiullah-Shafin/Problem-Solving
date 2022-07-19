#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = -1;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second >= 3) {
                ans = it->first;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
