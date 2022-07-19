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
       for (int i = 1; i < n; i++) {
           int x = a[i - 1] | a[i];
           a[i - 1] = 0;
           a[i] = x;
       }
       long long sum = 0;
       for (int i = 0; i < n; i++) {
           sum += a[i];
       }
       cout << sum << '\n';
    }
    return 0;
}
