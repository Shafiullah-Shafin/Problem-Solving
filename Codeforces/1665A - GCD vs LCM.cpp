#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int div = n / 4;
        int a = 1;
        int d = 1;
        int c = 1;
        int b = n - (a + d + c);
        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    }
    return 0;
}


