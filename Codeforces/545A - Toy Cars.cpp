#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, sz = 0; cin >> n;
    int a[n + 2];
    for (int i = 1; i <= n; i++) {
        bool tt = false;
        for (int j = 1; j <= n; j++) {
            int x; cin >> x;
            if (x == 1 || x == 3) tt = true;
        }
        if (!tt) {
           a[++sz] = i;
        }
    }
    cout << sz << '\n';
    for (int i = 1; i <= sz; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
