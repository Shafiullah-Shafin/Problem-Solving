#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            mp[a[i]]++;
        }
        int sum = a[n - 2] + a[n - 1] + a[n];
        if (mp.find(sum) == mp.end()) {
           cout << "NO" << '\n';
           continue;
        }
        sum = 0;
        bool ok = true;
        sum = a[1] + a[2] + a[3];
        if (mp.find(sum) == mp.end()) ok = false;
        sum = sum - a[3] + a[n];
        if (mp.find(sum) == mp.end()) {
            ok = false;
        }
        else {
            sum = sum - a[2] + a[n - 1];
            if (mp.find(sum) == mp.end()) ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

