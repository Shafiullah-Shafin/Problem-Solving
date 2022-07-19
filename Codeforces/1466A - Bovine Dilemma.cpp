#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> se;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i<= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                se.insert(a[j] - a[i]);
            }
        }
        cout << se.size() << '\n';
    }
    return 0;
}

