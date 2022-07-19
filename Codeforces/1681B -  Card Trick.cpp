#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int m; cin >> m;
        int top = 0;
        for (int i = 1; i <= m; i++) {
            int  x; cin >> x;
            top = (top + x) % n;
        }
        cout << a[top] << '\n';
    }
    return 0;
}
