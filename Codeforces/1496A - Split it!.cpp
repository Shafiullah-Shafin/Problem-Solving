#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        bool yo = true;
        int i, j;
        for (i = 0, j = n - 1; i < k; i++, j--) {
            if (i >= j || s[i] != s[j]) {
                yo = false;
                cout << "NO" << '\n';
                break;
            }
        }
        if (!yo) continue;
        if (j - i >= 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}

