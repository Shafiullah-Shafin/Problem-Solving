#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (n == 4) {
            cout << '1' << ' ' << '1' << '\n';
            continue;
        }
        if (n & 1 || n < 4) {
           cout << -1 << '\n';
           continue;
        }
        long long mx = n / 4;
        long long mn = n / 6;
        if (n % 6 == 4 || n % 6 == 2) {
            cout << mn + 1 << ' ' << mx << '\n';
        }
        else if (n % 6 == 0) {
            cout << mn << ' ' << mx << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
