#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    int a[n + 2];
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        sum += x;
        a[i] = x;
    }
    int cur = -1;
    bool ok = false;
    set<int> se;
    while (q--) {
        int t; cin >> t;
        if (t == 1) {
            int ind, x; cin >> ind >> x;
            if (ok) {
                if (se.find(ind) == se.end()) {
                    se.insert(ind);
                    sum -= cur;
                    sum += x;
                    a[ind] = x;
                }
                else {
                    sum -= a[ind];
                    sum += x;
                    a[ind] = x;
                }
            }
            else {
                sum -= a[ind];
                sum += x;
                a[ind] = x;
            }
        }
        else {
            int x; cin >> x;
            sum = 1LL * x * n;
            cur = x;
            se.clear();
            ok = true;
        }
        cout << sum << '\n';
    }
    return 0;
}
