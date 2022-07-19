#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        i64 mx = 2 * n;
        vector<pair<i64, i64>> v;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            v.push_back(make_pair(x, i));
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                i64 mul = v[i].first * v[j].first;
                if (mul >= mx) break;
                i64 sum = v[i].second + v[j].second;
                if (sum == mul) cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}

