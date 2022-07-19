#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, c, mx; cin >> a >> b >> c;
        mx = max({a, b, c});
        if(a == mx) {
            if(a > b && a > c)
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        }
        else
            cout << mx - a + 1 << ' ';
        if(b == mx) {
            if(b > a && b > c)
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        }
        else
            cout << mx - b + 1 << ' ';
        if(c == mx) {
            if(c > b && c > a)
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
        else
            cout << mx - c + 1 << '\n';
    }
    return 0;
}
