#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a > b) swap(a, b);
        int newa = 1, newb = b - (a - 1);
        int dif = newb - newa;
        if (newb <= a) {
            cout << -1 << '\n';
            continue;
        }
        int terminal = newb - 1 + dif;
        if (c <= terminal && c >= newb) {
            cout << c - dif << '\n';
        }
        else if (c >= 1 && c < newb) {
            cout << c + dif << '\n';
        }
        else cout << -1 << '\n';
    }
    return 0;
}

