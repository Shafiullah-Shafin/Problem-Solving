#include <bits/stdc++.h>
using namespace std;

#define i64 long long
pair<i64, i64> convert(int x, int m) {
    i64 cnt = 1;
    while (x % m == 0) {
        x /= m;
        cnt *= m;
    }
    return make_pair(x, cnt);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<pair<i64, i64>> A;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            pair<i64, i64> p = convert(x, m);
            if (!A.empty() && A.back().first == p.first) {
                A.back().second += p.second;
            }
            else {
                A.push_back(p);
            }
        }
        int k; cin >> k;
        vector<pair<i64, i64>> B;
        for (int i = 1; i <= k; i++) {
            int x; cin >> x;
            pair<i64, i64> p = convert(x, m);
            if (!B.empty() && B.back().first == p.first) {
                B.back().second += p.second;
            }
            else {
                B.push_back(p);
            }
        }
        if (A == B) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
