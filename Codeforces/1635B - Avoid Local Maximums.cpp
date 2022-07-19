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
       int cnt = 0;
       for (int i = 1; i + 1 < n; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                cnt++;
                if (a[i] <= a[i + 2] && i + 2 <= n - 1) {
                    a[i + 1] = a[i + 2];
                }
                else {
                    a[i + 1] = a[i];
                }
            }
       }
       cout << cnt << '\n';
       for (int i = 0; i < n; i++) {
           cout << a[i] << ' ';
       }
       cout << '\n';
    }
    return 0;
}

