#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    i64 n; cin >> n;
    i64 a = 1, b = n;
    for (i64 i = 2; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            i64 d = n / i;
            i64 lcm = (i * d) / __gcd(i, d);
            if (d != i && d <= b && lcm == n) {
                a = i;
                b = d;
            }
        }
    }
    cout << a << ' ' << b << '\n';
    return 0;
}

