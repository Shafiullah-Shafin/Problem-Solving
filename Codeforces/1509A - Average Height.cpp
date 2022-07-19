#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> even, odd;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x & 1) odd.push_back(x);
            else even.push_back(x);
        }
        for (auto x : even) {
            cout << x << ' ';
        }
        for (auto x : odd) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}

