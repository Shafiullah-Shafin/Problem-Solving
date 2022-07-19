#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n + 2];
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool tt = false;
        for (int i = 1; i <= n; i++) {
            if (mp.count(a[i] + k)) {
                tt = true;
            }
        }
        cout << (tt ? "YES" : "NO") << '\n';
    }
    return 0;
}


