#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5 + 7;
vector<int> v[mxn + 2];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            v[x].push_back(i);
        }
        vector<int> ans(n + 2, 0);
        for (int i = 1; i <= n; i++) {
            int cnt = 1;
            for (int j = 1; j < v[i].size(); j++) {
                if ((v[i][j] - v[i][j - 1]) & 1) cnt++;
            }
            if (v[i].empty()) ans[i] = 0;
            else ans[i] = cnt;
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        for (int i = 1; i <= n; i++) {
            v[i].clear();
        }
    }
    return 0;
}


