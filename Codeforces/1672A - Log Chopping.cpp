#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int tot = 0;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            tot += x - 1;
        }
        if (tot & 1) cout << "errorgorn" << '\n';
        else cout << "maomao90" << '\n';
    }
    return 0;
}
