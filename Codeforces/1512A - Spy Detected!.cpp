#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v[102];
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            v[x].push_back(i);
        }
        for (int i = 1; i <= 100; i++) {
            if (v[i].size() == 1) {
                for (auto x : v[i]) {
                    cout << x << '\n';
                }
                break;
            }
        }
    }
    return 0;
}


