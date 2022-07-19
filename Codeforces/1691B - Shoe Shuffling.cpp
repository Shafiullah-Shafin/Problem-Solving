#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2], b[n + 2];
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ok = true;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if ((*it).second == 1) {
                ok = false;
                break;
            }
        }
        if (!ok) {
           cout << -1 << '\n';
           continue;
        }
        int cnt = 1, k = 1, l = 1, r;
        for (int i = 2; i <= n; i++) {
            if (a[i] == a[i - 1] && i != n) cnt++;
            else {
                r = i - 1;
                int mid = (l + r) / 2;
                for (int j = mid + 1; j <= r; j++) {
                    b[k] = j;
                    k++;
                }
                for (int j = l; j <= mid; j++) {
                    b[k] = j;
                    k++;
                }
                cnt = 1;
                l = r + 1;
            }
        }
        r = n;
        int mid = (l + r) / 2;
        for (int j = mid + 1; j <= r; j++) {
            b[k] = j;
            k++;
        }
        for (int j = l; j <= mid; j++) {
            b[k] = j;
            k++;
        }
        swap(b[n], b[n - 1]);
        for (int i = 1; i <= n; i++) {
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
