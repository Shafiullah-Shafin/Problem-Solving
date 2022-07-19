#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int  a[n + 2];
        bool exist = false;
        int zero = 0;
        set<int> se;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                zero++;
                exist = true;
            }
            se.insert(a[i]);
        }
        if (exist) cout << n - zero << '\n';
        else if ((int)se.size() != n) cout << n << '\n';
        else cout << n + 1 << '\n';
    }
    return 0;
}

