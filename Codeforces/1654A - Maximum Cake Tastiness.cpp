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
       sort (a, a + n);
       cout << a[n - 1] + a[n - 2] << '\n';
    }
    return 0;
}
