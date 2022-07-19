#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 2; i <= n; i++) {
            if (a[i] < a[i - 1]) {
                cnt++;
                i++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
