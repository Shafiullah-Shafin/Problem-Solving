#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int dis = abs(a - b);
        if (!dis) {
           cout << 0 << '\n';
           continue;
        }
        if (dis % 10 == 0) {
           cout << dis / 10 << '\n';
        }
        else {
           cout << dis / 10 + 1 << '\n';
        }
    }
    return 0;
}


