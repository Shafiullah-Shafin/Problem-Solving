#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b, n; cin >> a >> b >> n;   // a b a^b a b a^b a b a^b a b   . . .
        if (n % 3 == 0) cout << a << '\n'; // 0 1  2  3 4  5  6 7  8  9 10  . . .
        else if (n % 3 == 1) cout << b << '\n';
        else if (n % 3 == 2) cout << (a ^ b) << '\n';
    }
    return 0;
}
