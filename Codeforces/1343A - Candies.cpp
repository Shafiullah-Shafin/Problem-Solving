#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int k = 2; k < 30; k++) {
            int a = (1 << k) - 1;
            if (n % a == 0) {
                cout << n / a << '\n';
                break;
            }
        }
    }
    return 0;
}
