#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        i64 sum = 0;
        for (i64 i = 1; i <= n / 2; i++) {
            sum += 1LL * 8 * i * i;
        }
        cout << sum << '\n';
    }
    return 0;
}

