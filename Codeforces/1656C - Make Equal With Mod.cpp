#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        bool one = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == 1) one = true;
            a[i] = x;
        }
        if (!one) {
           cout << "YES" << '\n';
           continue;
        }
        sort (a, a + n);
        bool tt = false;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1] + 1) {
               tt = true;
               break;
            }
        }
        cout << (tt ? "NO" : "YES") << '\n';
    }
    return 0;
}



