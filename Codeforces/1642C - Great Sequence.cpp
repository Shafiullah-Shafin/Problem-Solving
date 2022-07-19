#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        map<long long, long long> mp;
        long long a[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        long long cnt = 0;
        sort (a, a + n);
        for (int i = 0; i < n; i++) {
            if (mp[a[i]] == 0) continue;
            if (mp[a[i] * x]) {
                mp[a[i]]--;
                mp[a[i] * x]--;
            }
            else {
                mp[a[i]]--;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
