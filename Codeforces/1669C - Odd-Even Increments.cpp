#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        bool oodd, eeven, oeven, eodd;
        oodd = eeven = oeven = eodd = false;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            if (i & 1) {
                if (a[i] & 1) oodd = true;
                else oeven = true;
            }
            else {
                if (a[i] & 1) eodd = true;
                else eeven = true;
            }
        }
        if ((eodd && eeven) || (oeven && oodd)) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
