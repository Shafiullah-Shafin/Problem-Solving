#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int res, n, x; cin >> n >> x;
        for (int i = 1, j = 0; ;i++) {
            if (n >= j && n <= j * x + 2) {
                res = i;
                break;
            }
            else
                j++;
        }
        cout << res << '\n';
    }
    return 0;
}
