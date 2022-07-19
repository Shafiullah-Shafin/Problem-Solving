#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mid = n / 3;
        if (n == 7) {
            cout << 2 << ' ' << 4 << ' ' << 1 << '\n';
            continue;
        }
        if (n % 3 == 0) {
           cout << mid << ' ' << mid + 1 << ' ' << mid - 1 << '\n';
        }
        else if (n % 3 == 1) {
           cout << mid + 1 << ' ' << mid + 2 << ' ' << n - (mid + 1 + mid + 2) << '\n';
        }
        else {
           cout << mid + 1 << ' ' << mid + 2 << ' ' << n - (mid + 1 + mid + 2) << '\n';
        }
    }
    return 0;
}
