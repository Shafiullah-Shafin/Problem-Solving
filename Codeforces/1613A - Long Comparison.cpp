#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string x1, x2; int p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        if (x1.size() + p1 > x2.size() + p2) {
            cout << '>' << '\n';
            continue;
        }
        if (x1.size() + p1 < x2.size() + p2) {
            cout << '<' << '\n';
            continue;
        }
        int mn = min(p1, p2);
        p1 -= mn; p2 -= mn;
        while (p1--) {
            x1 += '0';
        }
        while (p2--) {
            x2 += '0';
        }
        if (x1 < x2) cout << '<' << '\n';
        else if (x1 > x2) cout << '>' << '\n';
        else cout << '=' << '\n';
    }
    return 0;
}

