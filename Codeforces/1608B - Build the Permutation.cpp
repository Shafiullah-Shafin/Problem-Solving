#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        if (abs(a - b) > 1 || (a + b > n - 2)) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = i + 1;
        }
        if (a > b) {
            reverse(v.begin(), v.end());
            int pos = 0;
            for(int i = 0; i < a; i++) {
                swap(v[pos], v[pos + 1]);
                pos += 2;
            }
        }
        else if (b > a) {
            int pos = 0;
            for (int i = 0; i < b; i++) {
                swap(v[pos], v[pos + 1]);
                pos += 2;
            }
        }
        else {
            int pos = 1;
            for (int i = 0; i < a; i++) {
                swap(v[pos], v[pos + 1]);
                pos += 2;
            }
        }
        for(auto x : v) cout << x << " " ;
        cout << '\n';
    }
    return 0;
}
